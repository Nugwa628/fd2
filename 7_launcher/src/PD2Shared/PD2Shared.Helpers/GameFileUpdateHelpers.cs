using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Security.Cryptography;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Shared.Helpers;

public class GameFileUpdateHelpers
{
	private readonly HttpClient _httpClient;

	public GameFileUpdateHelpers(HttpClient httpClient)
	{
		_httpClient = httpClient;
		_httpClient.Timeout = TimeSpan.FromMinutes(30.0);
	}

	public async Task UpdateFromShaMetadataAsync(ILocalStorage localStorage, IProgress<double> progress, Action onComplete)
	{
		FileUpdateModel fileUpdateModel = localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
		string installPath = Directory.GetCurrentDirectory();
		string fullUpdatePath = Path.Combine(installPath, fileUpdateModel.FilePath);
		Directory.CreateDirectory(fullUpdatePath);
		string metadataUrl = fileUpdateModel.Client.TrimEnd('/') + "/metadata.json";
		string localMetaPath = Path.Combine(installPath, "local_metadata.json");
		string text = ((!File.Exists(localMetaPath)) ? null : (await File.ReadAllTextAsync(localMetaPath)));
		string localMetadataContent = text;
		try
		{
			HttpResponseMessage obj = await _httpClient.GetAsync(metadataUrl);
			obj.EnsureSuccessStatusCode();
			string remoteMetadataContent = await obj.Content.ReadAsStringAsync();
			if (localMetadataContent != null && localMetadataContent == remoteMetadataContent)
			{
				return;
			}
			List<string> source = JObject.Parse(remoteMetadataContent)["checksum"]?.ToObject<List<string>>() ?? new List<string>();
			List<ShaHashFileItem> shaFiles = (from x in source.Select(delegate(string entry)
				{
					string[] array = entry.Split("  ", 2);
					return (array.Length != 2) ? null : new ShaHashFileItem
					{
						Name = array[1].Trim(),
						MediaLink = metadataUrl.Replace("metadata.json", "") + array[1].Trim(),
						Hash = array[0].Trim()
					};
				})
				where x != null
				select x).ToList();
			int processed = 0;
			foreach (ShaHashFileItem item in shaFiles)
			{
				if (!item.Name.EndsWith("/"))
				{
					string localFile = Path.Combine(fullUpdatePath, item.Name.Replace("/", Path.DirectorySeparatorChar.ToString()));
					string destination = Path.Combine(installPath, item.Name.Replace("/", Path.DirectorySeparatorChar.ToString()));
					Directory.CreateDirectory(Path.GetDirectoryName(localFile));
					if (!File.Exists(localFile) || !CompareSha1(localFile, item.Hash))
					{
						await DownloadFileAsync(item.MediaLink, localFile);
						File.Copy(localFile, destination, overwrite: true);
					}
					processed++;
					progress?.Report((double)processed / (double)shaFiles.Count);
				}
			}
			await File.WriteAllTextAsync(localMetaPath, remoteMetadataContent);
			onComplete?.Invoke();
		}
		catch (Exception)
		{
			onComplete?.Invoke();
		}
	}

	public bool CompareSha1(string filePath, string expectedHash)
	{
		using SHA1 sHA = SHA1.Create();
		using FileStream inputStream = File.OpenRead(filePath);
		return BitConverter.ToString(sHA.ComputeHash(inputStream)).Replace("-", "").ToLowerInvariant() == expectedHash.ToLowerInvariant();
	}

	private async Task DownloadFileAsync(string url, string destination)
	{
		using HttpResponseMessage response = await _httpClient.GetAsync(url, HttpCompletionOption.ResponseHeadersRead);
		response.EnsureSuccessStatusCode();
		Stream stream = await response.Content.ReadAsStreamAsync();
		try
		{
			FileStream fs = new FileStream(destination, FileMode.Create, FileAccess.Write, FileShare.None, 8192, useAsync: true);
			try
			{
				await stream.CopyToAsync(fs);
			}
			finally
			{
				if (fs != null)
				{
					await fs.DisposeAsync();
				}
			}
		}
		finally
		{
			if (stream != null)
			{
				await stream.DisposeAsync();
			}
		}
	}
}
