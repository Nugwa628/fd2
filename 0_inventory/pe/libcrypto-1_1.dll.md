# libcrypto-1_1.dll

- Size: 2,522,624 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x60395b5d (2021-02-26 20:34:37 UTC)
- ImageBase 0x10000000, entry 0x1000483b (in .text)
- Linker 14.16; .NET: no; overlay 0 bytes
- PDB: `e:\Work\Dev\CristiFati\Builds\Win\OPSWopenssl\src\openssl-1.1.1j\libcrypto-1_1.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- CompanyName: The OpenSSL Project, https://www.openssl.org/
- FileDescription: OpenSSL library
- FileVersion: 1.1.1j
- InternalName: libcrypto
- LegalCopyright: Copyright 1998-2021 The OpenSSL Authors. All rights reserved.
- OriginalFilename: libcrypto
- ProductName: The OpenSSL Toolkit
- ProductVersion: 1.1.1j
- _FileVersion: 1.1.1.10

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 1,854,773 | 1,854,976 | 6.00 | 0x60000020 |
| .rdata | 0x1c6000 | 589,846 | 590,336 | 5.69 | 0x40000040 |
| .data | 0x257000 | 23,000 | 5,632 | 4.04 | 0xc0000040 |
| .idata | 0x25d000 | 6,218 | 6,656 | 3.91 | 0x40000040 |
| .00cfg | 0x25f000 | 260 | 512 | 0.06 | 0x40000040 |
| .rsrc | 0x260000 | 1,660 | 2,048 | 1.82 | 0x40000040 |
| .reloc | 0x261000 | 61,433 | 61,440 | 6.18 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 147 | 30729 | 20 | VS2008 SP1 |
| 257 | 26706 | 2 | VS2017 |
| 261 | 26706 | 10 | VS2017 |
| 260 | 26706 | 10 | VS2017 |
| 259 | 26706 | 10 | VS2017 |
| 257 | 26715 | 11 | VS2017 |
| 1 | 0 | 153 | ? |
| 0 | 0 | 22 | ? |
| 260 | 27045 | 629 | VS2019 |
| 256 | 27045 | 1 | VS2019 |
| 255 | 27045 | 1 | VS2019 |
| 258 | 27045 | 1 | VS2019 |

## Imports

- **WS2_32.dll** (24): connect, closesocket, bind, accept, setsockopt, WSACleanup, WSAStartup, gethostbyname, getsockopt, getsockname, ioctlsocket, getnameinfo, freeaddrinfo, getaddrinfo, ntohs, socket, shutdown, recv, send, WSASetLastError, recvfrom, sendto, listen, WSAGetLastError
- **ADVAPI32.dll** (3): RegisterEventSourceW, DeregisterEventSource, ReportEventW
- **USER32.dll** (3): GetUserObjectInformationW, MessageBoxW, GetProcessWindowStation
- **bcrypt.dll** (1): BCryptGenRandom
- **KERNEL32.dll** (50): SetUnhandledExceptionFilter, UnhandledExceptionFilter, TerminateProcess, GetCurrentProcess, ReadConsoleW, ReadConsoleA, SetConsoleMode, GetConsoleMode, TlsFree, TlsSetValue, IsProcessorFeaturePresent, TlsAlloc, DeleteCriticalSection, InitializeCriticalSectionAndSpinCount, LeaveCriticalSection, EnterCriticalSection, GetSystemTimeAsFileTime, GetCurrentThreadId, GetCurrentProcessId, QueryPerformanceCounter, WideCharToMultiByte, IsDebuggerPresent, GetStartupInfoW, TlsGetValue, InitializeSListHead, FindNextFileW, FindFirstFileW, FindClose, GetModuleHandleExW, LoadLibraryW, LoadLibraryA, ConvertFiberToThread, ConvertThreadToFiber, SwitchToFiber, DeleteFiber, CreateFiber, FormatMessageW, GetSystemTime, SystemTimeToFileTime, GetLastError, ... (+10)
- **VCRUNTIME140.dll** (10): __std_type_info_destroy_list, strstr, wcsstr, memmove, strchr, strrchr, memset, memcpy, _except_handler4_common, memchr
- **api-ms-win-crt-stdio-l1-1-0.dll** (21): __stdio_common_vfprintf, feof, __stdio_common_vsprintf, fputs, _wfopen, fopen, __stdio_common_vswprintf, fclose, ferror, fflush, clearerr, setbuf, __acrt_iob_func, fgets, fwrite, __stdio_common_vsscanf, _setmode, ftell, fseek, fread, _fileno
- **api-ms-win-crt-convert-l1-1-0.dll** (3): strtoul, atoi, strtol
- **api-ms-win-crt-string-l1-1-0.dll** (9): _stricmp, strspn, strcspn, strncmp, strcmp, strncpy, isspace, _strnicmp, _strdup
- **api-ms-win-crt-time-l1-1-0.dll** (2): _gmtime64_s, _time64
- **api-ms-win-crt-utility-l1-1-0.dll** (1): qsort
- **api-ms-win-crt-runtime-l1-1-0.dll** (18): perror, _initialize_narrow_environment, _configure_narrow_argv, _seh_filter_dll, _errno, _register_onexit_function, signal, _execute_onexit_table, _crt_atexit, _crt_at_quick_exit, _cexit, terminate, _exit, strerror_s, _initterm, raise, _initialize_onexit_table, _initterm_e
- **api-ms-win-crt-filesystem-l1-1-0.dll** (3): _fstat64i32, _chmod, _stat64i32
- **api-ms-win-crt-heap-l1-1-0.dll** (3): realloc, malloc, free
- **api-ms-win-crt-environment-l1-1-0.dll** (1): getenv
- **api-ms-win-crt-math-l1-1-0.dll** (1): _except1

## Exports (4397)

- 1 0x10006b40 ACCESS_DESCRIPTION_free
- 2 0x10001901 ACCESS_DESCRIPTION_it
- 3 0x10003fe9 ACCESS_DESCRIPTION_new
- 4 0x100052fe ADMISSIONS_free
- 5 0x10004a5c ADMISSIONS_get0_admissionAuthority
- 6 0x1000290a ADMISSIONS_get0_namingAuthority
- 7 0x100069d3 ADMISSIONS_get0_professionInfos
- 8 0x10004bf6 ADMISSIONS_it
- 9 0x10006307 ADMISSIONS_new
- 10 0x1000690b ADMISSIONS_set0_admissionAuthority
- 11 0x10004507 ADMISSIONS_set0_namingAuthority
- 12 0x10005083 ADMISSIONS_set0_professionInfos
- 13 0x10004138 ADMISSION_SYNTAX_free
- 14 0x10004471 ADMISSION_SYNTAX_get0_admissionAuthority
- 15 0x10006456 ADMISSION_SYNTAX_get0_contentsOfAdmissions
- 16 0x100042aa ADMISSION_SYNTAX_it
- 17 0x100063e8 ADMISSION_SYNTAX_new
- 18 0x100071ad ADMISSION_SYNTAX_set0_admissionAuthority
- 19 0x10004665 ADMISSION_SYNTAX_set0_contentsOfAdmissions
- 20 0x1000694c AES_bi_ige_encrypt
- 21 0x100026a8 AES_cbc_encrypt
- 22 0x100053c6 AES_cfb128_encrypt
- 23 0x10001cd5 AES_cfb1_encrypt
- 24 0x10004ef3 AES_cfb8_encrypt
- 25 0x10004804 AES_decrypt
- 26 0x10003f99 AES_ecb_encrypt
- 27 0x100050ba AES_encrypt
- 28 0x10006127 AES_ige_encrypt
- 29 0x10006c21 AES_ofb128_encrypt
- 30 0x10004f4d AES_options
- 31 0x1000204a AES_set_decrypt_key
- 32 0x1000183e AES_set_encrypt_key
- 33 0x10006df2 AES_unwrap_key
- 34 0x10006b86 AES_wrap_key
- 35 0x10006177 ASIdOrRange_free
- 36 0x1000202c ASIdOrRange_it
- 37 0x100068e8 ASIdOrRange_new
- 38 0x1000301c ASIdentifierChoice_free
- 39 0x100066fe ASIdentifierChoice_it
- 40 0x100062d0 ASIdentifierChoice_new
- 41 0x10002874 ASIdentifiers_free
- 42 0x100053f8 ASIdentifiers_it
- 43 0x100050bf ASIdentifiers_new
- 44 0x1000144c ASN1_ANY_it
- 45 0x10006825 ASN1_BIT_STRING_check
- 46 0x10006262 ASN1_BIT_STRING_free
- 47 0x10005182 ASN1_BIT_STRING_get_bit
- 48 0x100059b6 ASN1_BIT_STRING_it
- 49 0x10005330 ASN1_BIT_STRING_name_print
- 50 0x100035f3 ASN1_BIT_STRING_new
- 51 0x10006ab4 ASN1_BIT_STRING_num_asc
- 52 0x100056a5 ASN1_BIT_STRING_set
- 53 0x10001c53 ASN1_BIT_STRING_set_asc
- 54 0x10004a89 ASN1_BIT_STRING_set_bit
- 55 0x10006ccb ASN1_BMPSTRING_free
- 56 0x100025f9 ASN1_BMPSTRING_it
- 57 0x10005f97 ASN1_BMPSTRING_new
- 58 0x10002914 ASN1_BOOLEAN_it
- 59 0x1000419c ASN1_ENUMERATED_free
- 60 0x100019f6 ASN1_ENUMERATED_get
- 61 0x10002e46 ASN1_ENUMERATED_get_int64
- 62 0x1000269e ASN1_ENUMERATED_it
- 63 0x10001bea ASN1_ENUMERATED_new
- 64 0x10005b1e ASN1_ENUMERATED_set
- 65 0x10001dd4 ASN1_ENUMERATED_set_int64
- 66 0x10004606 ASN1_ENUMERATED_to_BN
- 67 0x10004188 ASN1_FBOOLEAN_it
- 68 0x10003b2a ASN1_GENERALIZEDTIME_adj
- 69 0x10004c5f ASN1_GENERALIZEDTIME_check
- 70 0x10004976 ASN1_GENERALIZEDTIME_free
- 71 0x10004426 ASN1_GENERALIZEDTIME_it
- 72 0x10005afb ASN1_GENERALIZEDTIME_new
- 73 0x100045fc ASN1_GENERALIZEDTIME_print
- 74 0x10006384 ASN1_GENERALIZEDTIME_set
- 75 0x10002149 ASN1_GENERALIZEDTIME_set_string
- 76 0x10005399 ASN1_GENERALSTRING_free
- 77 0x10005402 ASN1_GENERALSTRING_it
- 78 0x10001fc8 ASN1_GENERALSTRING_new
- 79 0x10002171 ASN1_IA5STRING_free
- 80 0x10001037 ASN1_IA5STRING_it
- 81 0x100013ed ASN1_IA5STRING_new
- 82 0x10006708 ASN1_INTEGER_cmp
- 83 0x10006965 ASN1_INTEGER_dup
- 84 0x100059de ASN1_INTEGER_free
- 85 0x10001cfd ASN1_INTEGER_get
- 86 0x10004e1c ASN1_INTEGER_get_int64
- 87 0x100061e0 ASN1_INTEGER_get_uint64
- 88 0x10005ba0 ASN1_INTEGER_it
- 89 0x10003233 ASN1_INTEGER_new
- 90 0x10004da4 ASN1_INTEGER_set
- 91 0x100057bd ASN1_INTEGER_set_int64
- 92 0x100064e7 ASN1_INTEGER_set_uint64
- 93 0x10003832 ASN1_INTEGER_to_BN
- 94 0x100059c5 ASN1_ITEM_get
- 95 0x100025c7 ASN1_ITEM_lookup
- 96 0x1000299b ASN1_NULL_free
- 97 0x10003fc1 ASN1_NULL_it
- 98 0x100068a7 ASN1_NULL_new
- 99 0x100012ad ASN1_OBJECT_create
- 100 0x10001893 ASN1_OBJECT_free
- 101 0x10001910 ASN1_OBJECT_it
- 102 0x10006514 ASN1_OBJECT_new
- 103 0x10003eef ASN1_OCTET_STRING_NDEF_it
- 104 0x10005227 ASN1_OCTET_STRING_cmp
- 105 0x100028f6 ASN1_OCTET_STRING_dup
- 106 0x1000212b ASN1_OCTET_STRING_free
- 107 0x100061bd ASN1_OCTET_STRING_it
- 108 0x10006d11 ASN1_OCTET_STRING_new
- 109 0x10003e95 ASN1_OCTET_STRING_set
- 110 0x100032dd ASN1_PCTX_free
- 111 0x100066cc ASN1_PCTX_get_cert_flags
- 112 0x10003657 ASN1_PCTX_get_flags
- 113 0x10002865 ASN1_PCTX_get_nm_flags
- 114 0x1000718f ASN1_PCTX_get_oid_flags
- 115 0x10005b9b ASN1_PCTX_get_str_flags
- 116 0x10004f6b ASN1_PCTX_new
- 117 0x10005fc9 ASN1_PCTX_set_cert_flags
- 118 0x10003e27 ASN1_PCTX_set_flags
- 119 0x10005119 ASN1_PCTX_set_nm_flags
- 120 0x10002f72 ASN1_PCTX_set_oid_flags
- 121 0x10002d51 ASN1_PCTX_set_str_flags
- 122 0x1000295f ASN1_PRINTABLESTRING_free
- 123 0x10002964 ASN1_PRINTABLESTRING_it
- 124 0x10005394 ASN1_PRINTABLESTRING_new
- 125 0x10006569 ASN1_PRINTABLE_free
- 126 0x10001d1b ASN1_PRINTABLE_it
- 127 0x10006910 ASN1_PRINTABLE_new
- 128 0x10003300 ASN1_PRINTABLE_type
- 129 0x10006654 ASN1_SCTX_free
- 130 0x100021cb ASN1_SCTX_get_app_data
- 131 0x10002dce ASN1_SCTX_get_flags
- 132 0x10005114 ASN1_SCTX_get_item
- 133 0x10003337 ASN1_SCTX_get_template
- 134 0x1000642e ASN1_SCTX_new
- 135 0x100058fd ASN1_SCTX_set_app_data
- 136 0x10003648 ASN1_SEQUENCE_ANY_it
- 137 0x100043fe ASN1_SEQUENCE_it
- 138 0x100018bb ASN1_SET_ANY_it
- 139 0x100056cd ASN1_STRING_TABLE_add
- 140 0x10003f71 ASN1_STRING_TABLE_cleanup
- 141 0x1000490d ASN1_STRING_TABLE_get
- 142 0x1000362f ASN1_STRING_clear_free
- 143 0x100040c0 ASN1_STRING_cmp
- 144 0x10006c03 ASN1_STRING_copy
- 145 0x10006fb4 ASN1_STRING_data
- 146 0x100050b5 ASN1_STRING_dup
- 147 0x10001956 ASN1_STRING_free
- 148 0x10001041 ASN1_STRING_get0_data
- 149 0x10004782 ASN1_STRING_get_default_mask
- 150 0x10002aa9 ASN1_STRING_length
- 151 0x100048c7 ASN1_STRING_length_set
- 152 0x1000526d ASN1_STRING_new
- 153 0x10002bfd ASN1_STRING_print
- 154 0x10001771 ASN1_STRING_print_ex
- 155 0x10006de3 ASN1_STRING_print_ex_fp
- 156 0x10006e1a ASN1_STRING_set
- 157 0x10003f80 ASN1_STRING_set0
- 158 0x10004bdd ASN1_STRING_set_by_NID
- 159 0x10006dd9 ASN1_STRING_set_default_mask
- 160 0x1000399a ASN1_STRING_set_default_mask_asc
- 161 0x100014a1 ASN1_STRING_to_UTF8
- 162 0x10002ab8 ASN1_STRING_type
- 163 0x10006d34 ASN1_STRING_type_new
- 164 0x100053e9 ASN1_T61STRING_free
- 165 0x1000466a ASN1_T61STRING_it
- 166 0x10006f41 ASN1_T61STRING_new
- 167 0x10003aee ASN1_TBOOLEAN_it
- 168 0x100019c4 ASN1_TIME_adj
- 169 0x10003e54 ASN1_TIME_check
- 170 0x10002c52 ASN1_TIME_cmp_time_t
- 171 0x10004813 ASN1_TIME_compare
- 172 0x100063f2 ASN1_TIME_diff
- 173 0x10006f82 ASN1_TIME_free
- 174 0x100063ac ASN1_TIME_it
- 175 0x100070fe ASN1_TIME_new
- 176 0x10006154 ASN1_TIME_normalize
- 177 0x100040f7 ASN1_TIME_print
- 178 0x1000448a ASN1_TIME_set
- 179 0x10004129 ASN1_TIME_set_string
- 180 0x10003c92 ASN1_TIME_set_string_X509
- 181 0x10004930 ASN1_TIME_to_generalizedtime
- 182 0x1000114a ASN1_TIME_to_tm
- 183 0x100058b7 ASN1_TYPE_cmp
- 184 0x10001df7 ASN1_TYPE_free
- 185 0x10005f29 ASN1_TYPE_get
- 186 0x10001bf4 ASN1_TYPE_get_int_octetstring
- 187 0x10002595 ASN1_TYPE_get_octetstring
- 188 0x10002554 ASN1_TYPE_new
- 189 0x100013f2 ASN1_TYPE_pack_sequence
- 190 0x10006a7d ASN1_TYPE_set
- 191 0x1000625d ASN1_TYPE_set1
- 192 0x100022f2 ASN1_TYPE_set_int_octetstring
- 193 0x1000687a ASN1_TYPE_set_octetstring
- 194 0x100015dc ASN1_TYPE_unpack_sequence
- 195 0x10003945 ASN1_UNIVERSALSTRING_free
- 196 0x10005187 ASN1_UNIVERSALSTRING_it
- 197 0x1000602d ASN1_UNIVERSALSTRING_new
- 198 0x10006dc0 ASN1_UNIVERSALSTRING_to_string
- 199 0x100054bb ASN1_UTCTIME_adj
- 200 0x100050dd ASN1_UTCTIME_check
- 201 0x10004c87 ASN1_UTCTIME_cmp_time_t
- 202 0x1000607d ASN1_UTCTIME_free
- 203 0x10002cde ASN1_UTCTIME_it
- 204 0x10002dab ASN1_UTCTIME_new
- 205 0x100037dd ASN1_UTCTIME_print
- 206 0x10002ec8 ASN1_UTCTIME_set
- 207 0x10005a65 ASN1_UTCTIME_set_string
- 208 0x10005e2a ASN1_UTF8STRING_free
- 209 0x1000344a ASN1_UTF8STRING_it
- 210 0x1000165e ASN1_UTF8STRING_new
- 211 0x1000176c ASN1_VISIBLESTRING_free
- 212 0x100069c4 ASN1_VISIBLESTRING_it
- 213 0x100022c5 ASN1_VISIBLESTRING_new
- 214 0x10004f66 ASN1_add_oid_module
- 215 0x10005d30 ASN1_add_stable_module
- 216 0x100024d7 ASN1_bn_print
- 217 0x10004589 ASN1_buf_print
- 218 0x10003ba7 ASN1_check_infinite_end
- 219 0x100071b2 ASN1_const_check_infinite_end
- 220 0x100067bc ASN1_d2i_bio
- 221 0x10002284 ASN1_d2i_fp
- 222 0x1000312f ASN1_digest
- 223 0x100067b7 ASN1_dup
- 224 0x10003fcb ASN1_generate_nconf
- 225 0x10002658 ASN1_generate_v3
- 226 0x10002ee1 ASN1_get_object
- 227 0x10003297 ASN1_i2d_bio
- 228 0x10002888 ASN1_i2d_fp
- 229 0x1000636b ASN1_item_d2i
- 230 0x100047c3 ASN1_item_d2i_bio
- 231 0x100018ac ASN1_item_d2i_fp
- 232 0x10005709 ASN1_item_digest
- 233 0x10003bf2 ASN1_item_dup
- 234 0x10006ca8 ASN1_item_ex_d2i
- 235 0x10003ab2 ASN1_item_ex_free
- 236 0x100024eb ASN1_item_ex_i2d
- 237 0x10003c1a ASN1_item_ex_new
- 238 0x10001e42 ASN1_item_free
- 239 0x100010be ASN1_item_i2d
- 240 0x10004dc2 ASN1_item_i2d_bio
- 241 0x1000127b ASN1_item_i2d_fp
- 242 0x10001528 ASN1_item_ndef_i2d
- 243 0x10001c8a ASN1_item_new
- 244 0x1000386e ASN1_item_pack
- 245 0x1000373d ASN1_item_print
- 246 0x1000115e ASN1_item_sign
- 247 0x10003bac ASN1_item_sign_ctx
- 248 0x10001104 ASN1_item_unpack
- 249 0x10004a07 ASN1_item_verify
- 250 0x10002784 ASN1_mbstring_copy
- 251 0x10003edb ASN1_mbstring_ncopy
- 252 0x1000138e ASN1_object_size
- 253 0x100055a6 ASN1_parse
- 254 0x10006f7d ASN1_parse_dump
- 255 0x10006cd0 ASN1_put_eoc
- 256 0x1000177b ASN1_put_object
- 257 0x1000500b ASN1_sign
- 258 0x10006fc3 ASN1_str2mask
- 259 0x10004c91 ASN1_tag2bit
- 260 0x1000655f ASN1_tag2str
- 261 0x10005420 ASN1_verify
- 262 0x10001208 ASRange_free
- 263 0x10001dc0 ASRange_it
- 264 0x100033fa ASRange_new
- 265 0x1000383c ASYNC_WAIT_CTX_clear_fd
- 266 0x10003035 ASYNC_WAIT_CTX_free
- 267 0x1000223e ASYNC_WAIT_CTX_get_all_fds
- 268 0x10006d70 ASYNC_WAIT_CTX_get_changed_fds
- 269 0x10001866 ASYNC_WAIT_CTX_get_fd
- 270 0x10006ff5 ASYNC_WAIT_CTX_new
- 271 0x10006587 ASYNC_WAIT_CTX_set_wait_fd
- 272 0x1000475a ASYNC_block_pause
- 273 0x10003931 ASYNC_cleanup_thread
- 274 0x10003d19 ASYNC_get_current_job
- 275 0x10004412 ASYNC_get_wait_ctx
- 276 0x10001ce4 ASYNC_init_thread
- 277 0x100033c3 ASYNC_is_capable
- 278 0x100054ed ASYNC_pause_job
- 279 0x100032d8 ASYNC_start_job
- 280 0x100034db ASYNC_unblock_pause
- 281 0x100013e3 AUTHORITY_INFO_ACCESS_free
- 282 0x10001f41 AUTHORITY_INFO_ACCESS_it
- 283 0x100047c8 AUTHORITY_INFO_ACCESS_new
- 284 0x10002716 AUTHORITY_KEYID_free
- 285 0x100015aa AUTHORITY_KEYID_it
- 286 0x10006087 AUTHORITY_KEYID_new
- 287 0x10004895 BASIC_CONSTRAINTS_free
- 288 0x10003238 BASIC_CONSTRAINTS_it
- 289 0x10002ca2 BASIC_CONSTRAINTS_new
- 290 0x10012980 BF_cbc_encrypt
- 291 0x1000307b BF_cfb64_encrypt
- 292 0x10012560 BF_decrypt
- 293 0x100041b5 BF_ecb_encrypt
- 294 0x10012140 BF_encrypt
- 295 0x10004381 BF_ofb64_encrypt
- 296 0x1000470f BF_options
- 297 0x1000254a BF_set_key
- 298 0x10006f3c BIGNUM_it
- 299 0x100069ce BIO_ADDRINFO_address
- 300 0x10005d49 BIO_ADDRINFO_family
- ... (+4097)
