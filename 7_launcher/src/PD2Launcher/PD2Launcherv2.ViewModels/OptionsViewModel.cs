using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using PD2Launcherv2.Enums;
using PD2Launcherv2.Helpers;
using PD2Launcherv2.Messages;
using PD2Shared.Interfaces;
using PD2Shared.Models;
using ProjectDiablo2Launcherv2;

namespace PD2Launcherv2.ViewModels;

public class OptionsViewModel : ViewModelBase
{
	private DDrawHelpers _ddrawHelpers;

	private readonly ILocalStorage _localStorage;

	private readonly string SetWindowsPermissionsScript = "SetPD2WindowsSettings.ps1";

	private readonly string RemoveWindowsPermissionsScript = "RemovePD2WindowsSettings.ps1";

	private bool _showAdvancedOptions;

	private string _selectedMode;

	private bool _isDdrawSelected;

	private List<DisplayValuePair> _optionsModePicker;

	private List<DisplayValuePair> _maxFpsPickerItems;

	private List<DisplayValuePair> _maxGameTicksPickerItems;

	private List<DisplayValuePair> _saveWindowPositionPickerItems;

	private List<DisplayValuePair> _rendererPickerItems;

	private List<DisplayValuePair> _hookPickerItems;

	private List<DisplayValuePair> _minFpsPickerItems;

	private List<DisplayValuePair> _shaderPickerItems;

	private string _selectedMaxFps;

	private string _selectedMaxGameTicks;

	private string _selectedSaveWindowPosition;

	private string _selectedRenderer;

	private string _selectedHook;

	private string _selectedMinFps;

	private string _selectedShader;

	private bool _maintainAspectRatio;

	private bool _windowboxing;

	private bool _automaticMouseSensitivity;

	private bool _verticalSync;

	private bool _unlockCursor;

	private bool _showWindowBorders;

	private bool _resizableWindow;

	private bool _enableD3d9Linear;

	private bool _forceCpu0Affinity;

	private bool _noActivateApp;

	private bool _handleMouse;

	private bool _nonExclusive;

	private bool _skipToBnet;

	private bool _autoUpdate;

	private bool _sndBkg;

	private int _width;

	private int _height;

	private int _ddrawPosX;

	private int _ddrawPosY;

	public Dictionary<string, bool> CheckboxStates { get; set; }

	public RelayCommand ToggleAdvancedOptionsCommand { get; }

	public RelayCommand RestoreDefaultsCommand { get; }

	public RelayCommand SetWindowsPermissionsCommand { get; }

	public RelayCommand RemoveWindowsPermissionsCommand { get; }

	public Visibility NonFullScreenVisibility
	{
		get
		{
			if (string.Equals(SelectedMode, "fullscreen", StringComparison.OrdinalIgnoreCase))
			{
				return (Visibility)2;
			}
			return (Visibility)0;
		}
	}

	public Visibility AdvancedOptionsVisibility
	{
		get
		{
			if (ShowAdvancedOptions)
			{
				return (Visibility)0;
			}
			return (Visibility)2;
		}
	}

	public Visibility DDrawControlsVisible
	{
		get
		{
			if (IsDdrawSelected)
			{
				return (Visibility)0;
			}
			return (Visibility)2;
		}
	}

	public bool ShowAdvancedOptions
	{
		get
		{
			return _showAdvancedOptions;
		}
		set
		{
			if (_showAdvancedOptions != value)
			{
				_showAdvancedOptions = value;
				OnPropertyChanged("ShowAdvancedOptions");
				OnPropertyChanged("AdvancedOptionsVisibility");
			}
		}
	}

	public string SelectedMode
	{
		get
		{
			return _selectedMode;
		}
		set
		{
			if (_selectedMode != value)
			{
				_selectedMode = value;
				OnPropertyChanged("SelectedMode");
				OnPropertyChanged("NonFullScreenVisibility");
			}
		}
	}

	public bool IsDdrawSelected
	{
		get
		{
			return _isDdrawSelected;
		}
		set
		{
			if (_isDdrawSelected != value)
			{
				_isDdrawSelected = value;
				OnPropertyChanged("IsDdrawSelected");
				OnPropertyChanged("DDrawControlsVisible");
			}
		}
	}

	public List<DisplayValuePair> OptionsModePicker
	{
		get
		{
			return _optionsModePicker;
		}
		set
		{
			if (_optionsModePicker != value)
			{
				_optionsModePicker = value;
				OnPropertyChanged("OptionsModePicker");
			}
		}
	}

	public List<DisplayValuePair> MaxFpsPickerItems
	{
		get
		{
			return _maxFpsPickerItems;
		}
		set
		{
			_maxFpsPickerItems = value;
			OnPropertyChanged("MaxFpsPickerItems");
		}
	}

	public List<DisplayValuePair> MaxGameTicksPickerItems
	{
		get
		{
			return _maxGameTicksPickerItems;
		}
		set
		{
			_maxGameTicksPickerItems = value;
			OnPropertyChanged("MaxGameTicksPickerItems");
		}
	}

	public List<DisplayValuePair> SaveWindowPositionPickerItems
	{
		get
		{
			return _saveWindowPositionPickerItems;
		}
		set
		{
			_saveWindowPositionPickerItems = value;
			OnPropertyChanged("SaveWindowPositionPickerItems");
		}
	}

	public List<DisplayValuePair> RendererPickerItems
	{
		get
		{
			return _rendererPickerItems;
		}
		set
		{
			_rendererPickerItems = value;
			OnPropertyChanged("RendererPickerItems");
		}
	}

	public List<DisplayValuePair> HookPickerItems
	{
		get
		{
			return _hookPickerItems;
		}
		set
		{
			_hookPickerItems = value;
			OnPropertyChanged("HookPickerItems");
		}
	}

	public List<DisplayValuePair> MinFpsPickerItems
	{
		get
		{
			return _minFpsPickerItems;
		}
		set
		{
			_minFpsPickerItems = value;
			OnPropertyChanged("MinFpsPickerItems");
		}
	}

	public List<DisplayValuePair> ShaderPickerItems
	{
		get
		{
			return _shaderPickerItems;
		}
		set
		{
			_shaderPickerItems = value;
			OnPropertyChanged("ShaderPickerItems");
		}
	}

	public string SelectedMaxFps
	{
		get
		{
			return _selectedMaxFps;
		}
		set
		{
			if (_selectedMaxFps != value)
			{
				_selectedMaxFps = value;
				OnPropertyChanged("SelectedMaxFps");
			}
		}
	}

	public string SelectedMaxGameTicks
	{
		get
		{
			return _selectedMaxGameTicks;
		}
		set
		{
			if (_selectedMaxGameTicks != value)
			{
				_selectedMaxGameTicks = value;
				OnPropertyChanged("SelectedMaxGameTicks");
			}
		}
	}

	public string SelectedSaveWindowPosition
	{
		get
		{
			return _selectedSaveWindowPosition;
		}
		set
		{
			if (_selectedSaveWindowPosition != value)
			{
				_selectedSaveWindowPosition = value;
				OnPropertyChanged("SelectedSaveWindowPosition");
			}
		}
	}

	public string SelectedRenderer
	{
		get
		{
			return _selectedRenderer;
		}
		set
		{
			if (_selectedRenderer != value)
			{
				_selectedRenderer = value;
				OnPropertyChanged("SelectedRenderer");
			}
		}
	}

	public string SelectedHook
	{
		get
		{
			return _selectedHook;
		}
		set
		{
			if (_selectedHook != value)
			{
				_selectedHook = value;
				OnPropertyChanged("SelectedHook");
			}
		}
	}

	public string SelectedMinFps
	{
		get
		{
			return _selectedMinFps;
		}
		set
		{
			if (_selectedMinFps != value)
			{
				_selectedMinFps = value;
				OnPropertyChanged("SelectedMinFps");
			}
		}
	}

	public string SelectedShader
	{
		get
		{
			return _selectedShader;
		}
		set
		{
			if (_selectedShader != value)
			{
				_selectedShader = value;
				OnPropertyChanged("SelectedShader");
			}
		}
	}

	public bool MaintainAspectRatio
	{
		get
		{
			return _maintainAspectRatio;
		}
		set
		{
			if (_maintainAspectRatio != value)
			{
				_maintainAspectRatio = value;
				OnPropertyChanged("MaintainAspectRatio");
			}
		}
	}

	public bool Windowboxing
	{
		get
		{
			return _windowboxing;
		}
		set
		{
			if (_windowboxing != value)
			{
				_windowboxing = value;
				OnPropertyChanged("Windowboxing");
			}
		}
	}

	public bool AutomaticMouseSensitivity
	{
		get
		{
			return _automaticMouseSensitivity;
		}
		set
		{
			if (_automaticMouseSensitivity != value)
			{
				_automaticMouseSensitivity = value;
				OnPropertyChanged("AutomaticMouseSensitivity");
			}
		}
	}

	public bool VerticalSync
	{
		get
		{
			return _verticalSync;
		}
		set
		{
			if (_verticalSync != value)
			{
				_verticalSync = value;
				OnPropertyChanged("VerticalSync");
			}
		}
	}

	public bool UnlockCursor
	{
		get
		{
			return _unlockCursor;
		}
		set
		{
			if (_unlockCursor != value)
			{
				_unlockCursor = value;
				OnPropertyChanged("UnlockCursor");
			}
		}
	}

	public bool ShowWindowBorders
	{
		get
		{
			return _showWindowBorders;
		}
		set
		{
			if (_showWindowBorders != value)
			{
				_showWindowBorders = value;
				OnPropertyChanged("ShowWindowBorders");
			}
		}
	}

	public bool ResizableWindow
	{
		get
		{
			return _resizableWindow;
		}
		set
		{
			if (_resizableWindow != value)
			{
				_resizableWindow = value;
				OnPropertyChanged("ResizableWindow");
			}
		}
	}

	public bool EnableD3d9Linear
	{
		get
		{
			return _enableD3d9Linear;
		}
		set
		{
			if (_enableD3d9Linear != value)
			{
				_enableD3d9Linear = value;
				OnPropertyChanged("EnableD3d9Linear");
			}
		}
	}

	public bool ForceCpu0Affinity
	{
		get
		{
			return _forceCpu0Affinity;
		}
		set
		{
			if (_forceCpu0Affinity != value)
			{
				_forceCpu0Affinity = value;
				OnPropertyChanged("ForceCpu0Affinity");
			}
		}
	}

	public bool NoActivateApp
	{
		get
		{
			return _noActivateApp;
		}
		set
		{
			if (_noActivateApp != value)
			{
				_noActivateApp = value;
				OnPropertyChanged("NoActivateApp");
			}
		}
	}

	public bool HandleMouse
	{
		get
		{
			return _handleMouse;
		}
		set
		{
			if (_handleMouse != value)
			{
				_handleMouse = value;
				OnPropertyChanged("HandleMouse");
			}
		}
	}

	public bool NonExclusive
	{
		get
		{
			return _nonExclusive;
		}
		set
		{
			if (_nonExclusive != value)
			{
				_nonExclusive = value;
				OnPropertyChanged("NonExclusive");
			}
		}
	}

	public bool SkipToBnet
	{
		get
		{
			return _skipToBnet;
		}
		set
		{
			if (_skipToBnet != value)
			{
				_skipToBnet = value;
				OnPropertyChanged("SkipToBnet");
			}
		}
	}

	public bool AutoUpdate
	{
		get
		{
			return _autoUpdate;
		}
		set
		{
			if (_autoUpdate != value)
			{
				_autoUpdate = value;
				OnPropertyChanged("AutoUpdate");
				bool isBeta = _localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel).FilePath.Equals("Beta");
				Messenger.Default.Send(new ConfigurationChangeMessage
				{
					IsDisableUpdates = value,
					IsBeta = isBeta
				});
			}
		}
	}

	public bool SndBkg
	{
		get
		{
			return _sndBkg;
		}
		set
		{
			if (_sndBkg != value)
			{
				_sndBkg = value;
				OnPropertyChanged("SndBkg");
			}
		}
	}

	public int Width
	{
		get
		{
			return _width;
		}
		set
		{
			if (_width != value)
			{
				_width = value;
				OnPropertyChanged("Width");
			}
		}
	}

	public int Height
	{
		get
		{
			return _height;
		}
		set
		{
			if (_height != value)
			{
				_height = value;
				OnPropertyChanged("Height");
			}
		}
	}

	public int DdrawPosX
	{
		get
		{
			return _ddrawPosX;
		}
		set
		{
			if (_ddrawPosX != value)
			{
				_ddrawPosX = value;
				OnPropertyChanged("DdrawPosX");
			}
		}
	}

	public int DdrawPosY
	{
		get
		{
			return _ddrawPosY;
		}
		set
		{
			if (_ddrawPosY != value)
			{
				_ddrawPosY = value;
				OnPropertyChanged("DdrawPosY");
			}
		}
	}

	public OptionsViewModel(ILocalStorage localStorage)
	{
		_localStorage = localStorage;
		_ddrawHelpers = new DDrawHelpers();
		_ddrawHelpers.ReadDdrawOptions();
		CheckboxStates = new Dictionary<string, bool>();
		OptionsModePicker = Constants.ModePickerItems();
		MaxFpsPickerItems = Constants.MaxFpsPickerItems();
		MaxGameTicksPickerItems = Constants.MaxGameTicksPickerItems();
		SaveWindowPositionPickerItems = Constants.SaveWindowPositionPickerItems();
		RendererPickerItems = Constants.RendererPickerItems();
		HookPickerItems = Constants.HookPickerItems();
		MinFpsPickerItems = Constants.MinFpsPickerItems();
		ShaderPickerItems = Constants.ShaderPickerItems();
		LoadLauncherArgs();
		LoadDDrawStorage();
		DealWithLoadingModeComboBox(_localStorage);
		base.CloseCommand = new RelayCommand(CloseView);
		ToggleAdvancedOptionsCommand = new RelayCommand(ToggleAdvancedOptions);
		RestoreDefaultsCommand = new RelayCommand(ResetDdrawOptionsToDefaults);
		SetWindowsPermissionsCommand = new RelayCommand(SetWindowsPermissions);
		RemoveWindowsPermissionsCommand = new RelayCommand(RemoveWindowsPermissions);
	}

	private void ToggleAdvancedOptions()
	{
		ShowAdvancedOptions = !ShowAdvancedOptions;
	}

	private void SetWindowsPermissions()
	{
		Process.Start(new ProcessStartInfo
		{
			FileName = "powershell.exe",
			Arguments = "-NoProfile -ExecutionPolicy ByPass -File \"" + SetWindowsPermissionsScript + "\"",
			UseShellExecute = false
		});
	}

	private void RemoveWindowsPermissions()
	{
		Process.Start(new ProcessStartInfo
		{
			FileName = "powershell.exe",
			Arguments = "-NoProfile -ExecutionPolicy ByPass -File \"" + RemoveWindowsPermissionsScript + "\"",
			UseShellExecute = false
		});
	}

	private void LoadLauncherArgs()
	{
		LauncherArgs launcherArgs = _localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
		if (launcherArgs != null)
		{
			IsDdrawSelected = launcherArgs.graphics;
			SkipToBnet = launcherArgs.skiptobnet;
			SndBkg = launcherArgs.sndbkg;
			AutoUpdate = launcherArgs.disableAutoUpdate;
		}
	}

	private void UpdateLauncherArgsStorage()
	{
		LauncherArgs value = new LauncherArgs
		{
			graphics = IsDdrawSelected,
			skiptobnet = SkipToBnet,
			sndbkg = SndBkg,
			disableAutoUpdate = AutoUpdate
		};
		_localStorage.Update(StorageKey.LauncherArgs, value);
	}

	private void LoadDDrawCheckBoxOptions()
	{
		DdrawOptions ddrawOptions = _localStorage.LoadSection<DdrawOptions>(StorageKey.DdrawOptions);
		if (ddrawOptions != null)
		{
			MaintainAspectRatio = ddrawOptions.Maintas;
			Windowboxing = ddrawOptions.Boxing;
			VerticalSync = ddrawOptions.Vsync;
			AutomaticMouseSensitivity = ddrawOptions.AdjMouse;
			UnlockCursor = ddrawOptions.DevMode;
			ShowWindowBorders = ddrawOptions.Border;
			ResizableWindow = ddrawOptions.Resizeable;
			EnableD3d9Linear = ddrawOptions.D3d9Linear;
			NoActivateApp = ddrawOptions.NoActivateApp;
			HandleMouse = ddrawOptions.HandleMouse;
			NonExclusive = ddrawOptions.NonExclusive;
			ForceCpu0Affinity = ddrawOptions.SingleCpu;
		}
	}

	private void DealWithLoadingModeComboBox(ILocalStorage localStorage)
	{
		DdrawOptions ddrawOptions = _localStorage.LoadSection<DdrawOptions>(StorageKey.DdrawOptions);
		if (ddrawOptions != null)
		{
			if (ddrawOptions.Fullscreen && ddrawOptions.Windowed)
			{
				SelectedMode = "borderless";
			}
			else if (!ddrawOptions.Fullscreen && ddrawOptions.Windowed)
			{
				SelectedMode = "windowed";
			}
			else
			{
				SelectedMode = "fullscreen";
			}
		}
	}

	private void LoadDDrawComboBoxOptions()
	{
		DdrawOptions ddrawOptions = _localStorage.LoadSection<DdrawOptions>(StorageKey.DdrawOptions);
		if (ddrawOptions != null)
		{
			SelectedMaxFps = ddrawOptions.MaxFps;
			SelectedMaxGameTicks = ddrawOptions.MaxGameTicks;
			SelectedSaveWindowPosition = ddrawOptions.SaveSettings;
			SelectedRenderer = ddrawOptions.Renderer;
			SelectedHook = ddrawOptions.Hook;
			SelectedShader = ddrawOptions.Shader;
			SelectedMinFps = ddrawOptions.MinFps;
		}
	}

	private void LoadDDrawTextBoxOptions()
	{
		DdrawOptions ddrawOptions = _localStorage.LoadSection<DdrawOptions>(StorageKey.DdrawOptions);
		if (ddrawOptions != null)
		{
			Width = ddrawOptions.Width;
			Height = ddrawOptions.Height;
			DdrawPosX = ddrawOptions.PosX;
			DdrawPosY = ddrawOptions.PosY;
		}
	}

	private void SaveDDrawOptions()
	{
		DdrawOptions ddrawOptions = _localStorage.LoadSection<DdrawOptions>(StorageKey.DdrawOptions);
		ddrawOptions.Width = Width;
		ddrawOptions.Height = Height;
		ddrawOptions.PosX = DdrawPosX;
		ddrawOptions.PosY = DdrawPosY;
		ddrawOptions.Maintas = MaintainAspectRatio;
		ddrawOptions.Boxing = Windowboxing;
		ddrawOptions.Vsync = VerticalSync;
		ddrawOptions.AdjMouse = AutomaticMouseSensitivity;
		ddrawOptions.DevMode = UnlockCursor;
		ddrawOptions.Border = ShowWindowBorders;
		ddrawOptions.Resizeable = ResizableWindow;
		ddrawOptions.D3d9Linear = EnableD3d9Linear;
		ddrawOptions.NoActivateApp = NoActivateApp;
		ddrawOptions.HandleMouse = HandleMouse;
		ddrawOptions.NonExclusive = NonExclusive;
		ddrawOptions.SingleCpu = ForceCpu0Affinity;
		ddrawOptions.MaxFps = SelectedMaxFps;
		ddrawOptions.MaxGameTicks = SelectedMaxGameTicks;
		ddrawOptions.SaveSettings = SelectedSaveWindowPosition;
		ddrawOptions.Renderer = SelectedRenderer;
		ddrawOptions.Hook = SelectedHook;
		ddrawOptions.Shader = SelectedShader;
		ddrawOptions.MinFps = SelectedMinFps;
		switch (SelectedMode)
		{
		case "borderless":
			ddrawOptions.Fullscreen = true;
			ddrawOptions.Windowed = true;
			break;
		case "windowed":
			ddrawOptions.Fullscreen = false;
			ddrawOptions.Windowed = true;
			break;
		case "fullscreen":
			ddrawOptions.Fullscreen = true;
			ddrawOptions.Windowed = false;
			break;
		default:
			ddrawOptions.Fullscreen = true;
			ddrawOptions.Windowed = false;
			break;
		}
		_localStorage.Update(StorageKey.DdrawOptions, ddrawOptions);
	}

	private void LoadDDrawStorage()
	{
		LoadDDrawTextBoxOptions();
		LoadDDrawComboBoxOptions();
		LoadDDrawCheckBoxOptions();
	}

	private void UpdateDDrawStorage()
	{
		SaveDDrawOptions();
	}

	public void ResetDdrawOptionsToDefaults()
	{
		DdrawOptions defaultDdrawOptions = Constants.Ddraw.DefaultDdrawOptions;
		_localStorage.Update(StorageKey.DdrawOptions, defaultDdrawOptions);
		_ddrawHelpers.WriteDdrawOptions();
		LoadDDrawStorage();
	}

	private void CloseView()
	{
		UpdateLauncherArgsStorage();
		UpdateDDrawStorage();
		_ddrawHelpers.WriteDdrawOptions();
		Messenger.Default.Send(new NavigationMessage
		{
			Action = NavigationAction.GoBack
		});
	}
}
