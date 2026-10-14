using System;
using System.Buffers.Binary;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Text.Json;
using System.Threading.Tasks;

namespace UpdateUtility;

internal static class Program
{
	private sealed class UpdatePlan
	{
		public string InstallDirectory { get; init; } = string.Empty;


		public string Pd2Launcher { get; init; } = string.Empty;


		public string TempPd2Launcher { get; init; } = string.Empty;


		public string SteamPd2 { get; init; } = string.Empty;


		public string TempSteamPd2 { get; init; } = string.Empty;


		public string? ExplicitExecutableToStart { get; init; }
	}

	private sealed class ManifestResponse
	{
		public List<ManifestItem> Items { get; set; } = new List<ManifestItem>();

	}

	private sealed class ManifestItem
	{
		public string Name { get; set; } = string.Empty;


		public string? MediaLink { get; set; }

		public long Size { get; set; }

		public string? Crc32c { get; set; }
	}

	private const string ManifestUrl = "https://pd2-launcher.projectdiablo2.com/launcher_manifest.json";

	private static readonly HttpClient HttpClient = new HttpClient
	{
		Timeout = TimeSpan.FromMinutes(30.0)
	};

	private static readonly uint[] Crc32CTable = CreateCrc32CTable();

	private static async Task<int> Main(string[] args)
	{
		Log("-=-=-= Update Utility Started =-=-=-");
		Log($"Received {args.Length} arguments.");
		for (int i = 0; i < args.Length; i++)
		{
			Log($"Argument {i}: {args[i]}");
		}
		UpdatePlan plan = ResolvePlan(args);
		LogPlan(plan);
		bool launcherWasRunning = IsMatchingProcessRunning("PD2Launcher", plan.Pd2Launcher);
		bool steamWasRunning = IsMatchingProcessRunning("SteamPD2", plan.SteamPd2);
		Dictionary<string, ManifestItem> manifestItems = await TryGetManifestItemsAsync();
		bool launcherTempReady = await EnsureTempFileAsync("PD2Launcher.exe", plan.TempPd2Launcher, manifestItems);
		bool steamTempReady = await EnsureTempFileAsync("SteamPD2.exe", plan.TempSteamPd2, manifestItems);
		if (!launcherTempReady && !steamTempReady)
		{
			Log("No usable launcher temp files were found or downloaded. Nothing will be replaced.");
			return 2;
		}
		await KillAndWaitAsync("PD2Launcher", plan.Pd2Launcher);
		await KillAndWaitAsync("SteamPD2", plan.SteamPd2);
		await Task.Delay(1500);
		bool launcherUpdated = false;
		bool steamUpdated = false;
		if (launcherTempReady)
		{
			launcherUpdated = await TryReplaceWithRetriesAsync(plan.TempPd2Launcher, plan.Pd2Launcher, "PD2Launcher");
		}
		else
		{
			Log("PD2Launcher temp file is unavailable; launcher replacement skipped.");
		}
		if (steamTempReady)
		{
			steamUpdated = await TryReplaceWithRetriesAsync(plan.TempSteamPd2, plan.SteamPd2, "SteamPD2");
		}
		else
		{
			Log("SteamPD2 temp file is unavailable; SteamPD2 replacement skipped.");
		}
		if (launcherTempReady && !launcherUpdated)
		{
			Log("PD2Launcher replacement failed. The launcher will not be restarted to avoid another update loop.");
			return 3;
		}
		if (!launcherUpdated && !steamUpdated)
		{
			Log("No files were updated successfully.");
			return 4;
		}
		return (!(await StartExecutableAsync(SelectExecutableToStart(plan, launcherWasRunning, steamWasRunning)))) ? 5 : 0;
	}

	private static UpdatePlan ResolvePlan(string[] args)
	{
		string fullPath = Path.GetFullPath(AppContext.BaseDirectory);
		if (args.Length == 4 || args.Length == 5)
		{
			Log("Using new 4/5 argument format.");
			string text = NormalizePath(args[0], fullPath);
			string text2 = Path.GetDirectoryName(text) ?? fullPath;
			return new UpdatePlan
			{
				InstallDirectory = text2,
				Pd2Launcher = text,
				TempPd2Launcher = NormalizePath(args[1], text2),
				SteamPd2 = NormalizePath(args[2], text2),
				TempSteamPd2 = NormalizePath(args[3], text2),
				ExplicitExecutableToStart = ((args.Length == 5) ? NormalizePath(args[4], text2) : null)
			};
		}
		if (args.Length == 6 || args.Length == 7)
		{
			Log("Using legacy 6/7 argument format. PD2Shared arguments will be ignored.");
			string text3 = NormalizePath(args[0], fullPath);
			string text4 = Path.GetDirectoryName(text3) ?? fullPath;
			return new UpdatePlan
			{
				InstallDirectory = text4,
				Pd2Launcher = text3,
				TempPd2Launcher = NormalizePath(args[1], text4),
				SteamPd2 = NormalizePath(args[4], text4),
				TempSteamPd2 = NormalizePath(args[5], text4),
				ExplicitExecutableToStart = ((args.Length == 7) ? NormalizePath(args[6], text4) : null)
			};
		}
		Log($"Unexpected argument count: {args.Length}. " + "Falling back to self-contained repair mode.");
		string text5 = fullPath;
		string text6 = null;
		if (args.Length == 1)
		{
			string text7 = args[0].Trim().Trim('"');
			if (Directory.Exists(text7))
			{
				text5 = Path.GetFullPath(text7);
			}
			else if (text7.EndsWith(".exe", StringComparison.OrdinalIgnoreCase))
			{
				text6 = NormalizePath(text7, fullPath);
				text5 = Path.GetDirectoryName(text6) ?? fullPath;
			}
		}
		return new UpdatePlan
		{
			InstallDirectory = text5,
			Pd2Launcher = Path.Combine(text5, "PD2Launcher.exe"),
			TempPd2Launcher = Path.Combine(text5, "TempPD2Launcher.exe"),
			SteamPd2 = Path.Combine(text5, "SteamPD2.exe"),
			TempSteamPd2 = Path.Combine(text5, "TempSteamPD2.exe"),
			ExplicitExecutableToStart = text6
		};
	}

	private static void LogPlan(UpdatePlan plan)
	{
		Log("Install directory: " + plan.InstallDirectory);
		Log("PD2Launcher: " + plan.Pd2Launcher);
		Log("TempPD2Launcher: " + plan.TempPd2Launcher);
		Log("SteamPD2: " + plan.SteamPd2);
		Log("TempSteamPD2: " + plan.TempSteamPd2);
		Log("Explicit executable to start: " + (plan.ExplicitExecutableToStart ?? "<automatic>"));
	}

	private static string NormalizePath(string path, string baseDirectory)
	{
		string text = path.Trim().Trim('"');
		return Path.GetFullPath(Path.IsPathRooted(text) ? text : Path.Combine(baseDirectory, text));
	}

	private static async Task<Dictionary<string, ManifestItem>?> TryGetManifestItemsAsync()
	{
		_ = 1;
		try
		{
			Log("Downloading launcher manifest: https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
			using HttpResponseMessage response = await HttpClient.GetAsync("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
			response.EnsureSuccessStatusCode();
			Dictionary<string, ManifestItem> dictionary = JsonSerializer.Deserialize<ManifestResponse>(await response.Content.ReadAsStringAsync(), new JsonSerializerOptions
			{
				PropertyNameCaseInsensitive = true
			})?.Items?.Where((ManifestItem item) => !string.IsNullOrWhiteSpace(item.Name)).ToDictionary<ManifestItem, string, ManifestItem>((ManifestItem item) => item.Name, (ManifestItem item) => item, StringComparer.OrdinalIgnoreCase) ?? new Dictionary<string, ManifestItem>(StringComparer.OrdinalIgnoreCase);
			Log($"Manifest returned {dictionary.Count} items.");
			return dictionary;
		}
		catch (Exception ex)
		{
			Log("Manifest download failed. Existing valid temp files can still be installed. Error: " + ex.Message);
			return null;
		}
	}

	private static async Task<bool> EnsureTempFileAsync(string itemName, string tempPath, Dictionary<string, ManifestItem>? manifestItems)
	{
		ManifestItem value = null;
		manifestItems?.TryGetValue(itemName, out value);
		if (File.Exists(tempPath))
		{
			if (ValidateUpdateFile(tempPath, value, out string message))
			{
				Log("Using existing " + itemName + " temp file: " + message);
				return true;
			}
			Log("Existing temp file is invalid and will be replaced: " + tempPath + ". " + message);
			TryDelete(tempPath);
		}
		if (value == null)
		{
			Log("Cannot download " + itemName + ": it was not found in the manifest.");
			return false;
		}
		return await DownloadUpdateFileAsync(value, tempPath);
	}

	private static async Task<bool> DownloadUpdateFileAsync(ManifestItem item, string tempPath)
	{
		string downloadUrl = ResolveDownloadUrl(item);
		string partialPath = tempPath + ".download";
		TryDelete(partialPath);
		Directory.CreateDirectory(Path.GetDirectoryName(tempPath) ?? AppContext.BaseDirectory);
		for (int attempt = 1; attempt <= 3; attempt++)
		{
			try
			{
				Log($"Downloading {item.Name} (attempt {attempt}/{3}) from {downloadUrl}");
				using (HttpResponseMessage response = await HttpClient.GetAsync(downloadUrl, HttpCompletionOption.ResponseHeadersRead))
				{
					response.EnsureSuccessStatusCode();
					Stream source = await response.Content.ReadAsStreamAsync();
					bool result;
					try
					{
						FileStream destination = new FileStream(partialPath, FileMode.Create, FileAccess.Write, FileShare.None, 81920, useAsync: true);
						try
						{
							await source.CopyToAsync(destination);
							await destination.FlushAsync();
						}
						finally
						{
							if (destination != null)
							{
								await destination.DisposeAsync();
							}
						}
						if (!ValidateUpdateFile(partialPath, item, out string message))
						{
							throw new IOException("Downloaded file validation failed: " + message);
						}
						File.Move(partialPath, tempPath, overwrite: true);
						Log("Downloaded and validated " + item.Name + ": " + message);
						result = true;
					}
					finally
					{
						if (source != null)
						{
							await source.DisposeAsync();
						}
					}
					return result;
				}
				IL_051e:;
			}
			catch (Exception ex)
			{
				Log($"Download attempt {attempt}/{3} failed for {item.Name}: {ex.Message}");
				TryDelete(partialPath);
				if (attempt < 3)
				{
					await Task.Delay(1500);
				}
			}
		}
		Log($"Failed to download {item.Name} after {3} attempts.");
		return false;
	}

	private static string ResolveDownloadUrl(ManifestItem item)
	{
		if (!string.IsNullOrWhiteSpace(item.MediaLink))
		{
			if (Uri.TryCreate(item.MediaLink, UriKind.Absolute, out Uri result))
			{
				return result.ToString();
			}
			return new Uri(new Uri("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json"), item.MediaLink).ToString();
		}
		return new Uri(new Uri("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json"), Uri.EscapeDataString(item.Name)).ToString();
	}

	private static bool ValidateUpdateFile(string path, ManifestItem? manifestItem, out string message)
	{
		try
		{
			FileInfo fileInfo = new FileInfo(path);
			if (!fileInfo.Exists)
			{
				message = "file does not exist";
				return false;
			}
			if (fileInfo.Length < 32768)
			{
				message = $"file is unexpectedly small ({fileInfo.Length} bytes)";
				return false;
			}
			using (FileStream fileStream = new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.Read))
			{
				if (fileStream.ReadByte() != 77 || fileStream.ReadByte() != 90)
				{
					message = "file does not have a valid MZ executable header";
					return false;
				}
			}
			if (manifestItem != null && manifestItem.Size > 0 && fileInfo.Length != manifestItem.Size)
			{
				message = $"size mismatch: expected {manifestItem.Size}, received {fileInfo.Length}";
				return false;
			}
			if (manifestItem != null && !string.IsNullOrWhiteSpace(manifestItem.Crc32c))
			{
				string text = CalculateCrc32CBase64(path);
				if (!string.Equals(text, manifestItem.Crc32c, StringComparison.Ordinal))
				{
					message = $"CRC32C mismatch: expected {manifestItem.Crc32c}, received {text}";
					return false;
				}
				message = $"{fileInfo.Length} bytes, CRC32C {text}";
				return true;
			}
			message = $"{fileInfo.Length} bytes with valid MZ header";
			return true;
		}
		catch (Exception ex)
		{
			message = ex.Message;
			return false;
		}
	}

	private static bool IsMatchingProcessRunning(string processName, string expectedExecutablePath)
	{
		Process[] processesByName = Process.GetProcessesByName(processName);
		foreach (Process process in processesByName)
		{
			try
			{
				if (ProcessMatchesPath(process, expectedExecutablePath))
				{
					return true;
				}
			}
			catch
			{
			}
			finally
			{
				process.Dispose();
			}
		}
		return false;
	}

	private static async Task KillAndWaitAsync(string processName, string expectedExecutablePath)
	{
		Process[] processesByName = Process.GetProcessesByName(processName);
		foreach (Process process in processesByName)
		{
			try
			{
				if (!ProcessMatchesPath(process, expectedExecutablePath))
				{
					Log($"Skipping {processName} ({process.Id}) because it is " + "running from a different installation directory.");
					continue;
				}
				Log($"Closing {process.ProcessName} ({process.Id}).");
				process.Kill(entireProcessTree: true);
				Task waitTask = process.WaitForExitAsync();
				if (await Task.WhenAny(waitTask, Task.Delay(TimeSpan.FromSeconds(20.0))) != waitTask)
				{
					Log($"Timed out waiting for {processName} ({process.Id}) " + "to exit.");
				}
				else
				{
					Log($"{processName} ({process.Id}) exited.");
				}
			}
			catch (Exception ex)
			{
				Log($"Failed to close {processName} ({process.Id}): " + ex.Message);
			}
			finally
			{
				process.Dispose();
			}
		}
	}

	private static bool ProcessMatchesPath(Process process, string expectedExecutablePath)
	{
		string text = process.MainModule?.FileName;
		if (string.IsNullOrWhiteSpace(text))
		{
			return false;
		}
		return string.Equals(Path.GetFullPath(text), Path.GetFullPath(expectedExecutablePath), StringComparison.OrdinalIgnoreCase);
	}

	private static async Task<bool> TryReplaceWithRetriesAsync(string tempPath, string finalPath, string label)
	{
		if (!File.Exists(tempPath))
		{
			Log(label + " temp file missing: " + tempPath);
			return false;
		}
		string backupPath = finalPath + ".update-backup";
		for (int attempt = 1; attempt <= 15; attempt++)
		{
			bool flag = false;
			try
			{
				TryDelete(backupPath);
				if (File.Exists(finalPath))
				{
					File.Move(finalPath, backupPath, overwrite: true);
					flag = true;
				}
				File.Move(tempPath, finalPath, overwrite: true);
				if (!ValidateUpdateFile(finalPath, null, out string message))
				{
					throw new IOException("Installed executable failed validation: " + message);
				}
				TryDelete(backupPath);
				Log(label + " updated successfully: " + message);
				return true;
			}
			catch (Exception ex)
			{
				Log($"[{label}] replacement attempt {attempt}/{15} failed: {ex.Message}");
				try
				{
					if (flag && File.Exists(backupPath))
					{
						TryDelete(finalPath);
						File.Move(backupPath, finalPath, overwrite: true);
						Log("[" + label + "] restored the previous executable.");
					}
				}
				catch (Exception ex2)
				{
					Log("[" + label + "] failed to restore previous executable: " + ex2.Message);
				}
				if (attempt < 15)
				{
					await Task.Delay(1000);
				}
			}
		}
		Log($"Failed to update {label} after {15} attempts.");
		return false;
	}

	private static string SelectExecutableToStart(UpdatePlan plan, bool launcherWasRunning, bool steamWasRunning)
	{
		if (!string.IsNullOrWhiteSpace(plan.ExplicitExecutableToStart))
		{
			return plan.ExplicitExecutableToStart;
		}
		if (steamWasRunning && File.Exists(plan.SteamPd2))
		{
			return plan.SteamPd2;
		}
		return plan.Pd2Launcher;
	}

	private static async Task<bool> StartExecutableAsync(string path)
	{
		if (!File.Exists(path))
		{
			Log("Executable to restart was not found: " + path);
			return false;
		}
		try
		{
			Log("Starting: " + path);
			Process process = Process.Start(new ProcessStartInfo
			{
				FileName = path,
				WorkingDirectory = (Path.GetDirectoryName(path) ?? AppContext.BaseDirectory),
				UseShellExecute = true
			});
			if (process == null)
			{
				Log("Process.Start returned null.");
				return false;
			}
			int processId = process.Id;
			await Task.Delay(1000);
			if (process.HasExited)
			{
				Log($"Started process {processId}, but it exited immediately with code {process.ExitCode}.");
				process.Dispose();
				return false;
			}
			Log($"Started successfully with process ID {processId}.");
			process.Dispose();
			return true;
		}
		catch (Exception ex)
		{
			Log("Failed to start executable: " + ex.Message);
			return false;
		}
	}

	private static void TryDelete(string path)
	{
		try
		{
			if (File.Exists(path))
			{
				File.Delete(path);
			}
		}
		catch (Exception ex)
		{
			Log("Could not delete " + path + ": " + ex.Message);
		}
	}

	private static string CalculateCrc32CBase64(string path)
	{
		uint num = uint.MaxValue;
		byte[] array = new byte[81920];
		using FileStream fileStream = new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.Read);
		int num2;
		while ((num2 = fileStream.Read(array, 0, array.Length)) > 0)
		{
			for (int i = 0; i < num2; i++)
			{
				num = Crc32CTable[(num ^ array[i]) & 0xFF] ^ (num >> 8);
			}
		}
		num = ~num;
		Span<byte> obj = stackalloc byte[4];
		BinaryPrimitives.WriteUInt32BigEndian(obj, num);
		return Convert.ToBase64String(obj);
	}

	private static uint[] CreateCrc32CTable()
	{
		uint[] array = new uint[256];
		for (uint num = 0u; num < array.Length; num++)
		{
			uint num2 = num;
			for (int i = 0; i < 8; i++)
			{
				num2 = (((num2 & (true ? 1u : 0u)) != 0) ? ((num2 >> 1) ^ 0x82F63B78u) : (num2 >> 1));
			}
			array[num] = num2;
		}
		return array;
	}

	private static void Log(string message)
	{
		string text = $"{DateTime.Now:yyyy-MM-dd HH:mm:ss}: {message}";
		try
		{
			File.AppendAllText(Path.Combine(AppContext.BaseDirectory, "update.log"), text + Environment.NewLine);
		}
		catch
		{
		}
		try
		{
			Console.WriteLine(text);
		}
		catch
		{
		}
	}
}
