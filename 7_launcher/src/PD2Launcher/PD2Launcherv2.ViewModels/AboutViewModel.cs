using System;
using System.Windows;
using System.Windows.Threading;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using PD2Launcherv2.Enums;
using PD2Launcherv2.Helpers;
using PD2Launcherv2.Messages;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Launcherv2.ViewModels;

public class AboutViewModel : ViewModelBase
{
	private DispatcherTimer _holdTimer;

	private DateTime _holdStartTime;

	private const int RequiredHoldSeconds = 10;

	private bool _showCustomEnv;

	private string _customClientUrl;

	private readonly ILocalStorage _localStorage;

	public bool ShowCustomEnv
	{
		get
		{
			return _showCustomEnv;
		}
		set
		{
			_showCustomEnv = value;
			OnPropertyChanged("ShowCustomEnv");
		}
	}

	public string CustomClientUrl
	{
		get
		{
			return _customClientUrl;
		}
		set
		{
			_customClientUrl = value;
			OnPropertyChanged("CustomClientUrl");
		}
	}

	public RelayCommand ToggleCustomEnvCommand { get; private set; }

	public string cloudFileBucket { get; set; }

	public string folderPath { get; set; }

	public RelayCommand ProdBucket { get; private set; }

	public RelayCommand BetaBucket { get; private set; }

	public RelayCommand CustomBucket { get; private set; }

	public AboutViewModel(ILocalStorage localStorage)
	{
		_localStorage = localStorage;
		ProdBucket = new RelayCommand(ProdBucketAssign);
		BetaBucket = new RelayCommand(BetaBucketAssign);
		CustomBucket = new RelayCommand(CustomBucketAssign);
		base.CloseCommand = new RelayCommand(CloseView);
	}

	public void ProdBucketAssign()
	{
		FileUpdateModel value = new FileUpdateModel
		{
			Client = "https://pd2-client-files.projectdiablo2.com/",
			FilePath = "Live"
		};
		_localStorage.Update(StorageKey.FileUpdateModel, value);
		LauncherArgs launcherArgs = _localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
		Messenger.Default.Send(new ConfigurationChangeMessage
		{
			IsBeta = false,
			IsCustom = false,
			IsDisableUpdates = launcherArgs.disableAutoUpdate
		});
		Messenger.Default.Send(new NavigationMessage
		{
			Action = NavigationAction.GoBack
		});
	}

	public void BetaBucketAssign()
	{
		FileUpdateModel value = new FileUpdateModel
		{
			Client = "https://pd2-beta-client-files.projectdiablo2.com/",
			FilePath = "Beta"
		};
		_localStorage.Update(StorageKey.FileUpdateModel, value);
		LauncherArgs launcherArgs = _localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
		Messenger.Default.Send(new ConfigurationChangeMessage
		{
			IsBeta = true,
			IsCustom = false,
			IsDisableUpdates = launcherArgs.disableAutoUpdate
		});
		Messenger.Default.Send(new NavigationMessage
		{
			Action = NavigationAction.GoBack
		});
	}

	private void CustomBucketAssign()
	{
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		if (!string.IsNullOrWhiteSpace(_customClientUrl))
		{
			if (!Uri.TryCreate(CustomClientUrl, UriKind.Absolute, out Uri result) || (result.Scheme != Uri.UriSchemeHttp && result.Scheme != Uri.UriSchemeHttps))
			{
				MessageBox.Show("The Data provided is not valid. Please contact dev team for clarification", "Invalid Entry", (MessageBoxButton)0, (MessageBoxImage)48);
				return;
			}
			FileUpdateModel value = new FileUpdateModel
			{
				Client = CustomClientUrl,
				FilePath = "Custom"
			};
			_localStorage.Update(StorageKey.FileUpdateModel, value);
			LauncherArgs launcherArgs = _localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
			Messenger.Default.Send(new ConfigurationChangeMessage
			{
				IsBeta = false,
				IsCustom = false,
				IsDisableUpdates = launcherArgs.disableAutoUpdate
			});
			Messenger.Default.Send(new ConfigurationChangeMessage
			{
				IsBeta = false,
				IsCustom = true,
				IsDisableUpdates = launcherArgs.disableAutoUpdate
			});
			Messenger.Default.Send(new NavigationMessage
			{
				Action = NavigationAction.GoBack
			});
		}
	}

	private void CloseView()
	{
		Messenger.Default.Send(new NavigationMessage
		{
			Action = NavigationAction.GoBack
		});
	}
}
