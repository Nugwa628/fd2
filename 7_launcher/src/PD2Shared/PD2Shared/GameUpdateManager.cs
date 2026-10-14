using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using PD2Shared.Helpers;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Shared;

public static class GameUpdateManager
{
	public static async Task RunUpdateAndLaunchAsync(ILocalStorage storage, IFileUpdateHelpers fileUpdater, ILaunchGameHelpers gameLauncher, IFilterHelpers filterHelpers, IProgress<double>? progress = null, Action? onDownloadComplete = null)
	{
		Console.WriteLine("[PD2Shared] Update and Launch started...............");
		try
		{
			SelectedAuthorAndFilter selectedAuthorAndFilter = storage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
			if (selectedAuthorAndFilter != null)
			{
				try
				{
					await filterHelpers.CheckAndUpdateFilterAsync(selectedAuthorAndFilter);
					Console.WriteLine("[PD2Shared] Filter check complete.");
				}
				catch (Exception ex)
				{
					Console.WriteLine("[PD2Shared] Filter update failed: " + ex.Message);
				}
			}
			LauncherArgs launcherArgs = storage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
			if (launcherArgs != null && launcherArgs.disableAutoUpdate)
			{
				gameLauncher.LaunchGame(storage);
				return;
			}
			string installPath = Directory.GetCurrentDirectory();
			(string name, string tempName)[] big4 = new(string, string)[3]
			{
				("PD2Launcher.exe", "TempPD2Launcher.exe"),
				("SteamPD2.exe", "TempSteamPD2.exe"),
				("UpdateUtility.exe", "UpdateUtility.exe")
			};
			storage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
			List<CloudFileItem> cloudItems = await fileUpdater.GetCloudFileMetadataAsync("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
			bool big4NeedsUpdate = false;
			(string name, string tempName)[] array = big4;
			for (int i = 0; i < array.Length; i++)
			{
				(string, string) tuple = array[i];
				string name = tuple.Item1;
				string item = tuple.Item2;
				CloudFileItem cloudFileItem = cloudItems.FirstOrDefault((CloudFileItem c) => c.Name == name);
				if (cloudFileItem == null)
				{
					continue;
				}
				string text = Path.Combine(installPath, name);
				string destinationPath = Path.Combine(installPath, item);
				if (!File.Exists(text) || !fileUpdater.CompareCRC(text, cloudFileItem.Crc32c))
				{
					Console.WriteLine("[PD2Shared] " + name + " requires update.");
					big4NeedsUpdate = true;
					if (name == "UpdateUtility.exe")
					{
						await fileUpdater.DownloadFileAsync(cloudFileItem.MediaLink, text, progress ?? new Progress<double>());
					}
					else
					{
						await fileUpdater.DownloadFileAsync(cloudFileItem.MediaLink, destinationPath, progress ?? new Progress<double>());
					}
				}
			}
			if (big4NeedsUpdate)
			{
				string value = (File.Exists(Path.Combine(installPath, "SteamPD2.exe")) ? "SteamPD2.exe" : "PD2Launcher.exe");
				string fileName = Path.Combine(installPath, "UpdateUtility.exe");
				string arguments = $"\"{installPath}\\PD2Launcher.exe\" \"{installPath}\\TempPD2Launcher.exe\" \"{installPath}\\SteamPD2.exe\" \"{installPath}\\TempSteamPD2.exe\" \"{value}\"";
				Console.WriteLine("[PD2Shared] Big 4 updated. Launching UpdateUtility and exiting.");
				Process.Start(new ProcessStartInfo
				{
					FileName = fileName,
					Arguments = arguments,
					UseShellExecute = false,
					CreateNoWindow = true
				});
				Environment.Exit(0);
			}
			else
			{
				await fileUpdater.UpdateFilesCheck(storage, progress ?? new Progress<double>(), onDownloadComplete ?? ((Action)delegate
				{
				}));
				await fileUpdater.SyncFilesFromEnvToRoot(storage);
				Console.WriteLine("[PD2Shared] Game files updated.");
				gameLauncher.LaunchGame(storage);
				Console.WriteLine("[PD2Shared] Game launched");
			}
		}
		catch (Exception ex2)
		{
			Console.WriteLine("[PD2Shared] Fatal error during update or launch: " + ex2.Message);
		}
	}
}
