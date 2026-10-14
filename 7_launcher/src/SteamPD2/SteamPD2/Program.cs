using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using PD2Shared.Helpers;
using PD2Shared.Models;
using PD2Shared.Storage;

namespace SteamPD2;

internal class Program
{
	private static readonly string logPath = Path.Combine(AppContext.BaseDirectory, "SteamPD2.log");

	private static async Task Main(string[] args)
	{
		try
		{
			await Run(args);
		}
		catch (Exception value)
		{
			Log($"FATAL ERROR: {value}");
		}
	}

	private static async Task Run(string[] args)
	{
		Log("-=-=-= SteamPD2 Bootstrap Starting =-=-=-");
		LocalStorage localStorage = new LocalStorage();
		FileUpdateHelpers fileUpdateHelpers = new FileUpdateHelpers(new HttpClient());
		FilterHelpers filterHelpers = new FilterHelpers(new HttpClient(), localStorage);
		LaunchGameHelpers launchGameHelpers = new LaunchGameHelpers();
		if (localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs)?.disableAutoUpdate ?? false)
		{
			Log("disableAutoUpdate is enabled. Skipping all update checks.");
			launchGameHelpers.LaunchGame(localStorage);
			return;
		}
		FileUpdateModel fileUpdateModel = localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
		if (fileUpdateModel != null && fileUpdateModel.Client.TrimEnd('/') == "https://storage.googleapis.com/storage/v1/b/pd2-client-files/o")
		{
			fileUpdateModel.Client = "https://pd2-client-files.projectdiablo2.com/";
			localStorage.Update(StorageKey.FileUpdateModel, fileUpdateModel);
		}
		Log("Launcher metadata path: https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
		if (fileUpdateModel == null)
		{
			Log("FileUpdateModel missing. Exiting.");
			return;
		}
		List<CloudFileItem> cloudFiles = new List<CloudFileItem>();
		try
		{
			cloudFiles = await fileUpdateHelpers.GetCloudFileMetadataAsync("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
		}
		catch (Exception ex)
		{
			Log("Unable to reach update server. Proceeding in offline mode.");
			Log("Error: " + ex.Message);
			try
			{
				Log("Launching game (offline mode)...");
				launchGameHelpers.LaunchGame(localStorage);
				return;
			}
			catch (Exception ex2)
			{
				Log("Game launch failed: " + ex2.Message);
				return;
			}
		}
		try
		{
			cloudFiles = await fileUpdateHelpers.GetCloudFileMetadataAsync("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
		}
		catch (Exception ex3)
		{
			Log("Unable to reach update server. Proceeding in offline mode.");
			Log("Error: " + ex3.Message);
			try
			{
				Log("Launching game (offline mode)...");
				launchGameHelpers.LaunchGame(localStorage);
				return;
			}
			catch (Exception ex4)
			{
				Log("Game launch failed: " + ex4.Message);
				return;
			}
		}
		string installPath = Directory.GetCurrentDirectory();
		string[] bigFour = new string[3] { "PD2Launcher.exe", "SteamPD2.exe", "UpdateUtility.exe" };
		Log("Checking non-Big4 launcher files...");
		foreach (CloudFileItem cloudItem in cloudFiles)
		{
			if (bigFour.Contains(cloudItem.Name) || fileUpdateHelpers.IsFileExcluded(cloudItem.Name))
			{
				continue;
			}
			string text = Path.Combine(installPath, cloudItem.Name);
			if (!File.Exists(text) || !fileUpdateHelpers.CompareCRC(text, cloudItem.Crc32c))
			{
				Log("Updating " + cloudItem.Name + "...");
				if (!(await fileUpdateHelpers.PrepareLauncherUpdateAsync(cloudItem.MediaLink, text, null)))
				{
					Log("Failed to download " + cloudItem.Name + ". Exiting.");
					return;
				}
			}
		}
		if (bigFour.Any(delegate(string name)
		{
			CloudFileItem cloudFileItem2 = cloudFiles.FirstOrDefault((CloudFileItem i) => i.Name == name);
			string text2 = Path.Combine(installPath, name);
			return cloudFileItem2 != null && (!File.Exists(text2) || !fileUpdateHelpers.CompareCRC(text2, cloudFileItem2.Crc32c));
		}))
		{
			Log("Launcher update detected. Downloading...");
			string[] array = bigFour;
			foreach (string fileName in array)
			{
				Log("Queueing update: " + fileName);
				CloudFileItem cloudFileItem = cloudFiles.FirstOrDefault((CloudFileItem i) => i.Name == fileName);
				if (cloudFileItem != null)
				{
					Progress<double> progress = new Progress<double>(delegate(double v)
					{
						Console.Write($"\rDownloading {fileName}: {(int)(v * 100.0)}%   ");
					});
					string path = ((fileName == "UpdateUtility.exe") ? fileName : ("Temp" + fileName));
					string tempPath = Path.Combine(installPath, path);
					if (!(await fileUpdateHelpers.PrepareLauncherUpdateAsync(cloudFileItem.MediaLink, tempPath, progress)))
					{
						Log("Failed to download " + fileName + ". Exiting.");
						return;
					}
				}
			}
			Log("Launching updater utility...");
			fileUpdateHelpers.StartUpdateProcessWithSteam(installPath);
			return;
		}
		Log("Launcher files up to date. Checking game files...");
		try
		{
			await fileUpdateHelpers.UpdateFilesCheck(localStorage, new Progress<double>(delegate(double v)
			{
				Console.Write($"\rGame update: {(int)(v * 100.0)}%   ");
			}), delegate
			{
				Log("Game files updated.");
			});
			await fileUpdateHelpers.SyncFilesFromEnvToRoot(localStorage);
			Log("Checking filters...");
			SelectedAuthorAndFilter selectedAuthorAndFilter = localStorage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
			if (selectedAuthorAndFilter?.selectedFilter != null)
			{
				await filterHelpers.CheckAndUpdateFilterAsync(selectedAuthorAndFilter);
			}
			Log("Launching game...");
			launchGameHelpers.LaunchGame(localStorage);
		}
		catch (Exception ex5)
		{
			Log("Exception occurred: " + ex5.Message);
		}
	}

	private static void Log(string msg)
	{
		try
		{
			File.AppendAllText(logPath, $"[{DateTime.Now}] {msg}\n");
		}
		catch
		{
		}
	}
}
