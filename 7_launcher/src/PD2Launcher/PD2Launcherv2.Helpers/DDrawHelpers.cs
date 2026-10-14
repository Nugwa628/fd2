using System;
using System.IO;
using MadMilkman.Ini;
using PD2Shared.Interfaces;
using PD2Shared.Models;
using ProjectDiablo2Launcherv2;

namespace PD2Launcherv2.Helpers;

public class DDrawHelpers
{
	private readonly ILocalStorage _localStorage;

	public DDrawHelpers()
	{
		_localStorage = (ILocalStorage)App.ServiceProvider.GetService(typeof(ILocalStorage));
	}

	public DdrawOptions ReadDdrawOptions()
	{
		string ddrawIniPath = GetDdrawIniPath();
		IniFile iniFile = new IniFile();
		try
		{
			using Stream fileStream = new FileStream(ddrawIniPath, FileMode.Open, FileAccess.Read);
			iniFile.Load(fileStream);
		}
		catch (Exception)
		{
			return new DdrawOptions();
		}
		return ParseDdrawOptionsFromIni(iniFile);
	}

	private DdrawOptions ParseDdrawOptionsFromIni(IniFile iniFile)
	{
		IniSection iniSection = iniFile.Sections["ddraw"];
		DdrawOptions defaultDdrawOptions = Constants.Ddraw.DefaultDdrawOptions;
		if (iniSection == null)
		{
			return defaultDdrawOptions;
		}
		int result;
		int result2;
		bool result3;
		bool result4;
		bool result5;
		bool result6;
		bool result7;
		bool result8;
		int result9;
		int result10;
		bool result11;
		bool result12;
		bool result13;
		bool result14;
		bool result15;
		bool result16;
		bool result17;
		bool result18;
		bool result19;
		return new DdrawOptions
		{
			Width = (int.TryParse(iniSection.Keys["width"]?.Value, out result) ? result : defaultDdrawOptions.Width),
			Height = (int.TryParse(iniSection.Keys["height"]?.Value, out result2) ? result2 : defaultDdrawOptions.Height),
			Fullscreen = (bool.TryParse(iniSection.Keys["fullscreen"]?.Value.ToLower(), out result3) ? result3 : defaultDdrawOptions.Fullscreen),
			Windowed = (bool.TryParse(iniSection.Keys["windowed"]?.Value.ToLower(), out result4) ? result4 : defaultDdrawOptions.Windowed),
			Maintas = (bool.TryParse(iniSection.Keys["maintas"]?.Value.ToLower(), out result5) ? result5 : defaultDdrawOptions.Maintas),
			Boxing = (bool.TryParse(iniSection.Keys["boxing"]?.Value.ToLower(), out result6) ? result6 : defaultDdrawOptions.Boxing),
			MaxFps = (iniSection.Keys["maxfps"]?.Value ?? defaultDdrawOptions.MaxFps),
			Vsync = (bool.TryParse(iniSection.Keys["vsync"]?.Value.ToLower(), out result7) ? result7 : defaultDdrawOptions.Vsync),
			AdjMouse = (bool.TryParse(iniSection.Keys["adjmouse"]?.Value.ToLower(), out result8) ? result8 : defaultDdrawOptions.AdjMouse),
			Shader = (iniSection.Keys["shader"]?.Value ?? defaultDdrawOptions.Shader),
			PosX = (int.TryParse(iniSection.Keys["posX"]?.Value, out result9) ? result9 : defaultDdrawOptions.PosX),
			PosY = (int.TryParse(iniSection.Keys["posY"]?.Value, out result10) ? result10 : defaultDdrawOptions.PosY),
			Renderer = (iniSection.Keys["renderer"]?.Value ?? defaultDdrawOptions.Renderer),
			DevMode = (bool.TryParse(iniSection.Keys["devmode"]?.Value.ToLower(), out result11) ? result11 : defaultDdrawOptions.DevMode),
			Border = (bool.TryParse(iniSection.Keys["border"]?.Value.ToLower(), out result12) ? result12 : defaultDdrawOptions.Border),
			SaveSettings = (iniSection.Keys["savesettings"]?.Value ?? defaultDdrawOptions.SaveSettings),
			Resizeable = (bool.TryParse(iniSection.Keys["resizeable"]?.Value.ToLower(), out result13) ? result13 : defaultDdrawOptions.Resizeable),
			Vhack = (bool.TryParse(iniSection.Keys["vhack"]?.Value.ToLower(), out result14) ? result14 : defaultDdrawOptions.Vhack),
			D3d9Linear = (bool.TryParse(iniSection.Keys["d3d9linear"]?.Value.ToLower(), out result15) ? result15 : defaultDdrawOptions.D3d9Linear),
			NoActivateApp = (bool.TryParse(iniSection.Keys["noactivateapp"]?.Value.ToLower(), out result16) ? result16 : defaultDdrawOptions.NoActivateApp),
			MaxGameTicks = (iniSection.Keys["maxgameticks"]?.Value ?? defaultDdrawOptions.MaxGameTicks),
			HandleMouse = (bool.TryParse(iniSection.Keys["handlemouse"]?.Value.ToLower(), out result17) ? result17 : defaultDdrawOptions.HandleMouse),
			Hook = (iniSection.Keys["hook"]?.Value ?? defaultDdrawOptions.Hook),
			MinFps = (iniSection.Keys["minfps"]?.Value ?? defaultDdrawOptions.MinFps),
			NonExclusive = (bool.TryParse(iniSection.Keys["nonexclusive"]?.Value.ToLower(), out result18) ? result18 : defaultDdrawOptions.NonExclusive),
			SingleCpu = (bool.TryParse(iniSection.Keys["singlecpu"]?.Value.ToLower(), out result19) ? result19 : defaultDdrawOptions.SingleCpu)
		};
	}

	private string GetDdrawIniPath()
	{
		_ = _localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel).FilePath;
		return Path.Combine(Directory.GetCurrentDirectory(), "ddraw.ini");
	}

	public void WriteDdrawOptions()
	{
		DdrawOptions ddrawOptions = _localStorage.LoadSection<DdrawOptions>(StorageKey.DdrawOptions);
		string ddrawIniPath = GetDdrawIniPath();
		IniFile iniFile = new IniFile();
		if (File.Exists(ddrawIniPath))
		{
			using FileStream fileStream = File.OpenRead(ddrawIniPath);
			iniFile.Load(fileStream);
		}
		DdrawOptions defaultDdrawOptions = Constants.Ddraw.DefaultDdrawOptions;
		IniSection ddrawSection = iniFile.Sections["ddraw"] ?? iniFile.Sections.Add("ddraw");
		SetOption<int>("width", ddrawOptions.Width, defaultDdrawOptions.Width);
		SetOption<int>("height", ddrawOptions.Height, defaultDdrawOptions.Height);
		SetOption<bool>("fullscreen", ddrawOptions.Fullscreen, defaultDdrawOptions.Fullscreen);
		SetOption<bool>("windowed", ddrawOptions.Windowed, defaultDdrawOptions.Windowed);
		SetOption<bool>("maintas", ddrawOptions.Maintas, defaultDdrawOptions.Maintas);
		SetOption<bool>("boxing", ddrawOptions.Boxing, defaultDdrawOptions.Boxing);
		SetOption<string>("maxfps", ddrawOptions.MaxFps, defaultDdrawOptions.MaxFps);
		SetOption<bool>("vsync", ddrawOptions.Vsync, defaultDdrawOptions.Vsync);
		SetOption<bool>("adjmouse", ddrawOptions.AdjMouse, defaultDdrawOptions.AdjMouse);
		SetOption<string>("shader", ddrawOptions.Shader, defaultDdrawOptions.Shader);
		SetOption<int>("posX", ddrawOptions.PosX, defaultDdrawOptions.PosX);
		SetOption<int>("posY", ddrawOptions.PosY, defaultDdrawOptions.PosY);
		SetOption<string>("renderer", ddrawOptions.Renderer, defaultDdrawOptions.Renderer);
		SetOption<bool>("devmode", ddrawOptions.DevMode, defaultDdrawOptions.DevMode);
		SetOption<bool>("border", ddrawOptions.Border, defaultDdrawOptions.Border);
		SetOption<string>("savesettings", ddrawOptions.SaveSettings, defaultDdrawOptions.SaveSettings);
		SetOption<bool>("resizeable", ddrawOptions.Resizeable, defaultDdrawOptions.Resizeable);
		SetOption<bool>("vhack", ddrawOptions.Vhack, defaultDdrawOptions.Vhack);
		SetOption<bool>("d3d9linear", ddrawOptions.D3d9Linear, defaultDdrawOptions.D3d9Linear);
		SetOption<bool>("noactivateapp", ddrawOptions.NoActivateApp, defaultDdrawOptions.NoActivateApp);
		SetOption<string>("maxgameticks", ddrawOptions.MaxGameTicks, defaultDdrawOptions.MaxGameTicks);
		SetOption<bool>("handlemouse", ddrawOptions.HandleMouse, defaultDdrawOptions.HandleMouse);
		SetOption<string>("hook", ddrawOptions.Hook, defaultDdrawOptions.Hook);
		SetOption<string>("minfps", ddrawOptions.MinFps, defaultDdrawOptions.MinFps);
		SetOption<bool>("nonexclusive", ddrawOptions.NonExclusive, defaultDdrawOptions.NonExclusive);
		SetOption<bool>("singlecpu", ddrawOptions.SingleCpu, defaultDdrawOptions.SingleCpu);
		using (FileStream fileStream2 = File.Open(ddrawIniPath, FileMode.Create))
		{
			iniFile.Save(fileStream2);
		}
		void SetOption<T>(string keyName, T value, T defaultValue)
		{
			string value2 = ((value != null) ? value.ToString().ToLowerInvariant() : defaultValue.ToString().ToLowerInvariant());
			if (ddrawSection.Keys[keyName] != null)
			{
				ddrawSection.Keys[keyName].Value = value2;
			}
			else
			{
				ddrawSection.Keys.Add(keyName, value2);
			}
		}
	}
}
