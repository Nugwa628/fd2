using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Shared.Helpers;

public class LaunchGameHelpers : ILaunchGameHelpers
{
	public void LaunchGame(ILocalStorage localStorage)
	{
		localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
		string text = Path.Combine(Directory.GetCurrentDirectory(), "Game.exe");
		if (File.Exists(text))
		{
			LauncherArgs launcherArgs = localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
			string arguments = ConstructLaunchArguments(launcherArgs);
			Process.Start(new ProcessStartInfo
			{
				FileName = text,
				Arguments = arguments,
				WorkingDirectory = Path.GetDirectoryName(text)
			});
		}
	}

	private string ConstructLaunchArguments(LauncherArgs launcherArgs)
	{
		List<string> list = new List<string>();
		if (launcherArgs.graphics)
		{
			list.Add("-ddraw");
		}
		else
		{
			list.Add("-3dfx");
		}
		if (launcherArgs.skiptobnet)
		{
			list.Add("-skiptobnet");
		}
		if (launcherArgs.sndbkg)
		{
			list.Add("-sndbkg");
		}
		return string.Join(" ", list);
	}
}
