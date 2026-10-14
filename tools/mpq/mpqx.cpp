// mpqx: list / extract a Diablo II MPQ with StormLib.
//
//   mpqx list    <archive.mpq> <out.tsv>  [listfile ...]
//   mpqx extract <archive.mpq> <out_dir>  [listfile ...]
//
// Listfiles: the archive's own (listfile) is always used first (StormLib does this when
// enumerating); every extra listfile given on the command line is added on top.
// Hash-table entries that no listfile names are reported with StormLib's pseudo names
// ("File00000123.ext") and counted as unnamed.
//
// list    writes TSV: path, size, csize, flags(hex), hash_index, block_index, locale, magic(hex, first 8 bytes)
// extract writes every file under out_dir using its MPQ path ('\' -> '/'), plus
//         (folders merged case-insensitively, see resolveDirs).
// Both print a summary line: files=N named=N unnamed=N failed=N bytes=N
#include <StormLib.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <sys/stat.h>
#include <cerrno>
#include <dirent.h>
#include <strings.h>

// MPQ paths are case-insensitive and D2 archives spell the same folder several ways
// ("DATA\GLOBAL", "data\global"). Directories are created case-insensitively: an existing
// sibling folder that differs only in case is reused, so each folder exists once on disk.
// The file name itself keeps its MPQ spelling.
static std::string resolveDirs(const std::string &path) {
    std::string out;
    size_t start = 0;
    if (!path.empty() && path[0] == '/') { out = "/"; start = 1; }
    while (true) {
        size_t slash = path.find('/', start);
        if (slash == std::string::npos) { out += path.substr(start); break; }
        std::string comp = path.substr(start, slash - start);
        std::string parent = out.empty() ? "." : out;
        std::string use = comp;
        if (DIR *d = opendir(parent.c_str())) {
            while (dirent *e = readdir(d)) {
                if (strcasecmp(e->d_name, comp.c_str()) == 0) { use = e->d_name; break; }
            }
            closedir(d);
        }
        out += use + "/";
        mkdir(out.c_str(), 0755);
        start = slash + 1;
    }
    return out;
}
static bool mkdirs(const std::string &path) { resolveDirs(path); return true; }

static bool readAll(HANDLE hMpq, const char *name, std::vector<unsigned char> &buf) {
    HANDLE hf = nullptr;
    if (!SFileOpenFileEx(hMpq, name, SFILE_OPEN_FROM_MPQ, &hf)) return false;
    DWORD hi = 0;
    DWORD sz = SFileGetFileSize(hf, &hi);
    buf.resize(sz);
    DWORD got = 0;
    bool ok = true;
    if (sz) {
        ok = SFileReadFile(hf, buf.data(), sz, &got, nullptr);
        if (!ok && SErrGetLastError() == ERROR_HANDLE_EOF) ok = true;
        if (got != sz) ok = false;
    }
    SFileCloseFile(hf);
    return ok;
}

static bool isPseudo(const char *n) {
    // StormLib pseudo name: "File" + 8 digits + ".ext"
    if (strncmp(n, "File", 4) != 0) return false;
    for (int i = 4; i < 12; i++) if (n[i] < '0' || n[i] > '9') return false;
    return n[12] == '.' || n[12] == 0;
}

int main(int argc, char **argv) {
    if (argc < 4) {
        fprintf(stderr, "usage: %s list|extract <archive.mpq> <out> [listfile ...]\n", argv[0]);
        return 2;
    }
    std::string mode = argv[1];
    HANDLE hMpq = nullptr;
    if (!SFileOpenArchive(argv[2], 0, STREAM_FLAG_READ_ONLY, &hMpq)) {
        fprintf(stderr, "cannot open %s: error %u\n", argv[2], (unsigned)SErrGetLastError());
        return 1;
    }
    for (int i = 4; i < argc; i++) {
        DWORD e = SFileAddListFile(hMpq, argv[i]);
        if (e != ERROR_SUCCESS) fprintf(stderr, "warning: listfile %s: error %u\n", argv[i], (unsigned)e);
    }
    FILE *tsv = nullptr;
    std::string outDir;
    if (mode == "list") {
        tsv = fopen(argv[3], "wb");
        if (!tsv) { perror(argv[3]); return 1; }
        fprintf(tsv, "path\tsize\tcsize\tflags\thash_index\tblock_index\tlocale\tmagic\n");
    } else if (mode == "extract") {
        outDir = argv[3];
        if (!outDir.empty() && outDir.back() != '/') outDir += '/';
        mkdirs(outDir);
    } else {
        fprintf(stderr, "bad mode %s\n", mode.c_str());
        return 2;
    }

    SFILE_FIND_DATA fd;
    HANDLE hFind = SFileFindFirstFile(hMpq, "*", &fd, nullptr);
    unsigned long files = 0, named = 0, unnamed = 0, failed = 0;
    unsigned long long bytes = 0;
    std::vector<unsigned char> buf;
    if (hFind) {
        do {
            files++;
            bool pseudo = isPseudo(fd.cFileName);
            if (pseudo) unnamed++; else named++;
            bool ok = readAll(hMpq, fd.cFileName, buf);
            if (!ok) {
                failed++;
                fprintf(stderr, "read failed: %s (error %u)\n", fd.cFileName, (unsigned)SErrGetLastError());
            }
            bytes += fd.dwFileSize;
            if (tsv) {
                char magic[17] = {0};
                for (size_t i = 0; i < 8 && i < buf.size() && ok; i++) sprintf(magic + 2 * i, "%02x", buf[i]);
                fprintf(tsv, "%s\t%u\t%u\t%08x\t%u\t%u\t%u\t%s\n", fd.cFileName, (unsigned)fd.dwFileSize,
                        (unsigned)fd.dwCompSize, (unsigned)fd.dwFileFlags, (unsigned)fd.dwHashIndex,
                        (unsigned)fd.dwBlockIndex, (unsigned)fd.lcLocale, magic);
            } else if (ok) {
                std::string rel = fd.cFileName;
                for (auto &c : rel) if (c == '\\') c = '/';
                if (pseudo) rel = "_unnamed/" + rel;
                std::string path = resolveDirs(outDir + rel);
                FILE *f = fopen(path.c_str(), "wb");
                if (!f) { perror(path.c_str()); failed++; continue; }
                if (!buf.empty()) fwrite(buf.data(), 1, buf.size(), f);
                fclose(f);
            }
        } while (SFileFindNextFile(hFind, &fd));
        SFileFindClose(hFind);
    }
    // hash table capacity for the report
    DWORD hashSize = 0, cb = 0;
    SFileGetFileInfo(hMpq, SFileMpqHashTableSize, &hashSize, sizeof(hashSize), &cb);
    if (tsv) fclose(tsv);
    printf("archive=%s files=%lu named=%lu unnamed=%lu failed=%lu bytes=%llu hashtable=%u\n", argv[2], files,
           named, unnamed, failed, bytes, (unsigned)hashSize);
    SFileCloseArchive(hMpq);
    return failed ? 3 : 0;
}
