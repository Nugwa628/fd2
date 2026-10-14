using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Text.Json;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using Force.Crc32;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Shared.Helpers;

public class FileUpdateHelpers : IFileUpdateHelpers
{
	private readonly HttpClient _httpClient;

	private readonly List<string> _excludedFiles = Constants.excludedFiles;

	public FileUpdateHelpers(HttpClient httpClient)
	{
		_httpClient = httpClient;
		_httpClient.Timeout = TimeSpan.FromMinutes(30.0);
	}

	public void StartUpdateProcess()
	{
		string currentDirectory = Directory.GetCurrentDirectory();
		string text = Path.Combine(currentDirectory, "UpdateUtility.exe");
		string arguments = string.Join(" ", "\"" + Path.Combine(currentDirectory, "PD2Launcher.exe") + "\"", "\"" + Path.Combine(currentDirectory, "TempPD2Launcher.exe") + "\"", "\"" + Path.Combine(currentDirectory, "SteamPD2.exe") + "\"", "\"" + Path.Combine(currentDirectory, "TempSteamPD2.exe") + "\"");
		if (!File.Exists(text))
		{
			return;
		}
		try
		{
			Process.Start(new ProcessStartInfo
			{
				FileName = text,
				Arguments = arguments,
				UseShellExecute = true,
				CreateNoWindow = true
			});
		}
		catch (Exception)
		{
		}
	}

	public void StartUpdateProcessWithSteam(string installPath)
	{
		string[] value = new string[5]
		{
			"\"" + Path.Combine(installPath, "PD2Launcher.exe") + "\"",
			"\"" + Path.Combine(installPath, "TempPD2Launcher.exe") + "\"",
			"\"" + Path.Combine(installPath, "SteamPD2.exe") + "\"",
			"\"" + Path.Combine(installPath, "TempSteamPD2.exe") + "\"",
			"\"" + Path.Combine(installPath, "SteamPD2.exe") + "\""
		};
		Process.Start(new ProcessStartInfo
		{
			FileName = Path.Combine(installPath, "UpdateUtility.exe"),
			Arguments = string.Join(" ", value),
			UseShellExecute = true
		});
	}

	public async Task<List<CloudFileItem>> GetCloudFileMetadataAsync(string cloudFileBucket)
	{
		int maxRetries = 3;
		int delayBetweenRetries = 2000;
		for (int attempt = 1; attempt <= maxRetries; attempt++)
		{
			try
			{
				using HttpResponseMessage response = await _httpClient.GetAsync(cloudFileBucket);
				response.EnsureSuccessStatusCode();
				string json = await response.Content.ReadAsStringAsync();
				JsonSerializerOptions options = new JsonSerializerOptions
				{
					PropertyNameCaseInsensitive = true
				};
				return JsonSerializer.Deserialize<CloudFilesResponse>(json, options)?.Items.Select((CloudFileItem i) => new CloudFileItem
				{
					Name = i.Name,
					MediaLink = i.MediaLink,
					Crc32c = i.Crc32c
				}).ToList() ?? new List<CloudFileItem>();
			}
			catch (Exception ex) when (ex is HttpRequestException || ex is TaskCanceledException)
			{
				if (attempt >= maxRetries)
				{
					throw;
				}
				await Task.Delay(delayBetweenRetries);
			}
		}
		throw new InvalidOperationException("Unexpected retry loop exit.");
	}

	public async Task<bool> DownloadFileAsync(string fileUrl, string destinationPath, IProgress<double> progress)
	{
		int maxRetries = 3;
		for (int attempt = 1; attempt <= maxRetries; attempt++)
		{
			try
			{
				using HttpResponseMessage response = await _httpClient.GetAsync(fileUrl, HttpCompletionOption.ResponseHeadersRead);
				response.EnsureSuccessStatusCode();
				using Stream stream = await response.Content.ReadAsStreamAsync();
				using (FileStream fileStream = new FileStream(destinationPath, FileMode.Create, FileAccess.Write, FileShare.None, 8192, useAsync: true))
				{
					byte[] buffer = new byte[8192];
					double totalRead = 0.0;
					long totalBytes = response.Content.Headers.ContentLength.GetValueOrDefault(-1L);
					while (true)
					{
						int num;
						int bytesRead = (num = await stream.ReadAsync(buffer, 0, buffer.Length));
						if (num <= 0)
						{
							break;
						}
						await fileStream.WriteAsync(buffer, 0, bytesRead);
						totalRead += (double)bytesRead;
						if (totalBytes > 0)
						{
							progress.Report(totalRead / (double)totalBytes);
						}
					}
					await fileStream.FlushAsync();
				}
				return true;
			}
			catch (HttpRequestException) when (attempt < maxRetries)
			{
				if (attempt == maxRetries)
				{
					Console.WriteLine($"FAILED on {fileUrl} after {attempt} attempts");
				}
			}
		}
		Console.WriteLine("Failed to download " + fileUrl + " after retries.");
		return false;
	}

	public bool CompareLocalFilesCRC(string sourceFilePath, string destinationFilePath)
	{
		if (!File.Exists(sourceFilePath) || !File.Exists(destinationFilePath))
		{
			return false;
		}
		uint num = Crc32CFromFile(sourceFilePath);
		uint num2 = Crc32CFromFile(destinationFilePath);
		return num == num2;
	}

	public uint Crc32CFromFile(string filePath)
	{
		using FileStream fileStream = new FileStream(filePath, FileMode.Open, FileAccess.Read);
		byte[] array = new byte[8192];
		uint num = 0u;
		bool flag = true;
		int length;
		while ((length = fileStream.Read(array, 0, array.Length)) > 0)
		{
			if (flag)
			{
				num = Crc32CAlgorithm.Compute(array, 0, length);
				flag = false;
			}
			else
			{
				num = Crc32CAlgorithm.Append(num, array, 0, length);
			}
		}
		return num;
	}

	public bool CompareCRC(string filePath, string crcHash)
	{
		uint num = Crc32CFromFile(filePath);
		uint num2 = BitConverter.ToUInt32(Convert.FromBase64String(crcHash).Reverse().ToArray());
		return num == num2;
	}

	private async Task TryDownloadFileAsync(string mediaLink, string localFilePath, int retries, IProgress<double> progress)
	{
		_ = 4;
		try
		{
			using HttpResponseMessage response = await _httpClient.GetAsync(mediaLink, HttpCompletionOption.ResponseHeadersRead);
			if (!response.IsSuccessStatusCode)
			{
				return;
			}
			Stream stream = await response.Content.ReadAsStreamAsync();
			try
			{
				FileStream fs = new FileStream(localFilePath, FileMode.Create, FileAccess.Write, FileShare.None, 8192, useAsync: true);
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
		catch (HttpRequestException)
		{
		}
		catch (Exception)
		{
		}
	}

	public async Task UpdateFilesCheck(ILocalStorage _localStorage, IProgress<double> progress, Action onDownloadComplete)
	{
		FileUpdateModel fileUpdateModel = _localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
		if (fileUpdateModel == null)
		{
			return;
		}
		string installPath = Directory.GetCurrentDirectory();
		string fullUpdatePath = Path.Combine(installPath, fileUpdateModel.FilePath);
		Directory.CreateDirectory(fullUpdatePath);
		try
		{
			List<CloudFileItem> cloudFileItems = await GetCloudFileMetadataAsync(fileUpdateModel.Client);
			int processedFiles = 0;
			foreach (CloudFileItem item in cloudFileItems)
			{
				if (item.Name.EndsWith("/"))
				{
					continue;
				}
				string normalizedPath = item.Name.Replace("/", Path.DirectorySeparatorChar.ToString());
				string localFilePath = Path.Combine(fullUpdatePath, normalizedPath);
				string directoryName = Path.GetDirectoryName(localFilePath);
				if (directoryName != null)
				{
					Directory.CreateDirectory(directoryName);
				}
				bool num = IsFileExcluded(item.Name);
				bool flag = File.Exists(localFilePath);
				bool flag2 = num && !flag;
				bool flag3 = !num && (!flag || !CompareCRC(localFilePath, item.Crc32c));
				if (flag2 || flag3)
				{
					await TryDownloadFileAsync(item.MediaLink, localFilePath, 3, progress);
					string text = Path.Combine(installPath, normalizedPath);
					string directoryName2 = Path.GetDirectoryName(text);
					if (directoryName2 != null && !Directory.Exists(directoryName2))
					{
						Directory.CreateDirectory(directoryName2);
					}
					File.Copy(localFilePath, text, overwrite: true);
				}
				processedFiles++;
				progress?.Report((double)processedFiles / (double)cloudFileItems.Count);
			}
			onDownloadComplete?.Invoke();
		}
		catch (HttpRequestException)
		{
			onDownloadComplete?.Invoke();
		}
		catch (Exception)
		{
		}
		finally
		{
			_ = 0;
		}
	}

	public async Task SyncFilesFromEnvToRoot(ILocalStorage localStorage)
	{
		FileUpdateModel fileUpdateModel = localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
		if (fileUpdateModel == null)
		{
			return;
		}
		string currentDirectory = Directory.GetCurrentDirectory();
		string text = Path.Combine(currentDirectory, fileUpdateModel.FilePath);
		if (!Directory.Exists(text))
		{
			return;
		}
		foreach (string item in Directory.EnumerateFiles(text, "*.*", SearchOption.AllDirectories))
		{
			string text2 = Path.GetRelativePath(text, item).Replace(Path.DirectorySeparatorChar, '/');
			string text3 = Path.Combine(currentDirectory, text2.Replace('/', Path.DirectorySeparatorChar));
			bool flag = IsFileExcluded(text2);
			bool flag2 = File.Exists(text3);
			if (!(flag && flag2))
			{
				string directoryName = Path.GetDirectoryName(text3);
				if (directoryName != null && !Directory.Exists(directoryName))
				{
					Directory.CreateDirectory(directoryName);
				}
				if (!flag2 || (!flag && !CompareLocalFilesCRC(item, text3)))
				{
					File.Copy(item, text3, overwrite: true);
				}
			}
		}
	}

	private void ShowErrorMessage(string message)
	{
	}

	public bool IsFileExcluded(string fileName)
	{
		string fileName2 = fileName;
		return _excludedFiles.Any((string excluded) => (excluded.EndsWith("/*") && fileName2.StartsWith(excluded.TrimEnd('*', '/'))) || excluded.Equals(fileName2, StringComparison.OrdinalIgnoreCase) || (excluded.Contains("*") && new Regex("^" + Regex.Escape(excluded).Replace("\\*", ".*") + "$").IsMatch(fileName2)));
	}

	public async Task<bool> PrepareLauncherUpdateAsync(string launcherMediaLink, string tempPath, IProgress<double> progress)
	{
		try
		{
			return await DownloadFileAsync(launcherMediaLink, tempPath, progress);
		}
		catch (Exception)
		{
			return false;
		}
	}
}
