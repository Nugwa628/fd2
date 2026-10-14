// Decompile all BAML resources embedded in a WPF assembly back to XAML.
// Usage: dotnet run -- <assembly.dll> <refdir[:refdir...]> <outdir>
using System;
using System.IO;
using System.Linq;
using System.Reflection.Metadata;
using System.Resources;
using ICSharpCode.BamlDecompiler;
using ICSharpCode.Decompiler.Metadata;

class Program
{
    static int Main(string[] a)
    {
        if (a.Length != 3) { Console.Error.WriteLine("usage: BamlDump <assembly> <refdir[:refdir...]> <outdir>"); return 1; }
        var module = new PEFile(a[0]);
        var resolver = new UniversalAssemblyResolver(a[0], false, module.DetectTargetFrameworkId());
        foreach (var d in a[1].Split(Path.PathSeparator)) resolver.AddSearchDirectory(d);
        int n = 0;
        foreach (var res in module.Resources.Where(r => r.Name.EndsWith(".g.resources")))
        {
            using var rs = res.TryOpenStream();
            using var reader = new ResourceReader(rs);
            var e = reader.GetEnumerator();
            while (e.MoveNext())
            {
                var name = (string)e.Key;
                if (!name.EndsWith(".baml")) continue;
                Stream s = e.Value as Stream;
                if (s == null) { reader.GetResourceData(name, out _, out var data); s = new MemoryStream(data, 4, data.Length - 4); }
                var ms = new MemoryStream(); s.CopyTo(ms); ms.Position = 0;
                var dec = new XamlDecompiler(module, resolver, new BamlDecompilerSettings());
                var result = dec.Decompile(ms);
                var outp = Path.Combine(a[2], Path.ChangeExtension(name, ".xaml"));
                Directory.CreateDirectory(Path.GetDirectoryName(outp));
                result.Xaml.Save(outp);
                Console.WriteLine(outp); n++;
            }
        }
        Console.WriteLine($"{n} BAML resources decompiled");
        return 0;
    }
}
