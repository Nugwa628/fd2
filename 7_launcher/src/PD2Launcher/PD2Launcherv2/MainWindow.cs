using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using PD2Launcherv2.CustomControl;
using PD2Launcherv2.Enums;
using PD2Launcherv2.Helpers;
using PD2Launcherv2.Messages;
using PD2Launcherv2.Views;
using PD2Shared.Helpers;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Launcherv2;

public class MainWindow : Window, INotifyPropertyChanged, IComponentConnector
{
	private readonly ILocalStorage _localStorage;

	private readonly FileUpdateHelpers _fileUpdateHelpers;

	private readonly FilterHelpers _filterHelpers;

	private readonly LaunchGameHelpers _launchGameHelpers;

	private readonly NewsHelpers _newsHelpers;

	private readonly DDrawHelpers _dDrawHelpers;

	private readonly GameFileUpdateHelpers _gameFileUpdater;

	private bool _isBeta;

	private Visibility _betaVisibility = (Visibility)2;

	private bool _isCustom;

	private Visibility _customVisibility = (Visibility)2;

	private Visibility _updatesNotificationVisibility = (Visibility)2;

	internal ListBox NewsListBox;

	internal CustomImageButton MinimizeButton;

	internal CustomImageButton CloseButton;

	internal CustomImageButton PlayButton;

	internal ProgressBar DownloadProgressBar;

	internal CustomImageButton LootButton;

	internal CustomImageButton OptionsButton;

	internal CustomImageButton DonateButton;

	internal Image BetaNotification;

	internal CustomImageButton AboutButton;

	internal Image UpdatesNotification;

	internal Rectangle Overlay;

	internal Frame MainFrame;

	private bool _contentLoaded;

	public bool IsBeta
	{
		get
		{
			return _isBeta;
		}
		set
		{
			if (_isBeta != value)
			{
				_isBeta = value;
				BetaVisibility = (Visibility)((!value) ? 2 : 0);
				OnPropertyChanged("IsBeta");
			}
		}
	}

	public Visibility BetaVisibility
	{
		get
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			return _betaVisibility;
		}
		set
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			if (_betaVisibility != value)
			{
				_betaVisibility = value;
				OnPropertyChanged("BetaVisibility");
			}
		}
	}

	public bool IsCustom
	{
		get
		{
			return _isCustom;
		}
		set
		{
			if (_isCustom != value)
			{
				_isCustom = value;
				CustomVisibility = (Visibility)((!value) ? 2 : 0);
				OnPropertyChanged("IsCustom");
			}
		}
	}

	public Visibility CustomVisibility
	{
		get
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			return _customVisibility;
		}
		set
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			if (_customVisibility != value)
			{
				_customVisibility = value;
				OnPropertyChanged("CustomVisibility");
			}
		}
	}

	public Visibility UpdatesNotificationVisibility
	{
		get
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			return _updatesNotificationVisibility;
		}
		set
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			if (_updatesNotificationVisibility != value)
			{
				_updatesNotificationVisibility = value;
				OnPropertyChanged("UpdatesNotificationVisibility");
			}
		}
	}

	public List<NewsItem> NewsItems { get; set; }

	public bool IsDisableUpdates { get; private set; }

	public ICommand OpenOptionsCommand { get; private set; }

	public ICommand OpenLootCommand { get; private set; }

	public ICommand OpenAboutCommand { get; private set; }

	public event PropertyChangedEventHandler PropertyChanged;

	public MainWindow()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0009: Unknown result type (might be due to invalid IL or missing references)
		//IL_0010: Unknown result type (might be due to invalid IL or missing references)
		//IL_0154: Unknown result type (might be due to invalid IL or missing references)
		//IL_015e: Expected O, but got Unknown
		InitializeComponent();
		OpenOptionsCommand = new RelayCommand(ShowOptionsView);
		OpenLootCommand = new RelayCommand(ShowLootView);
		OpenAboutCommand = new RelayCommand(ShowAboutView);
		_dDrawHelpers = new DDrawHelpers();
		_localStorage = (ILocalStorage)App.ServiceProvider.GetService(typeof(ILocalStorage));
		InitializeDefaultSettings(_localStorage);
		_fileUpdateHelpers = (FileUpdateHelpers)App.ServiceProvider.GetService(typeof(FileUpdateHelpers));
		_filterHelpers = (FilterHelpers)App.ServiceProvider.GetService(typeof(FilterHelpers));
		_launchGameHelpers = (LaunchGameHelpers)App.ServiceProvider.GetService(typeof(LaunchGameHelpers));
		_newsHelpers = (NewsHelpers)App.ServiceProvider.GetService(typeof(NewsHelpers));
		_gameFileUpdater = (GameFileUpdateHelpers)App.ServiceProvider.GetService(typeof(GameFileUpdateHelpers));
		LoadAndUpdateDDrawOptions();
		InitWindow();
		EnsureWindowIsVisible();
		((FrameworkElement)this).Loaded += new RoutedEventHandler(MainWindow_Loaded);
		LoadConfiguration();
		Messenger.Default.Register<NavigationMessage>(this, OnNavigationMessageReceived);
		Messenger.Default.Register<ConfigurationChangeMessage>(this, OnConfigurationChanged);
		((FrameworkElement)this).DataContext = this;
		((Window)this).Closed += MainWindow_Closed;
		FileUpdateModel fileUpdateModel = _localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel) ?? new FileUpdateModel
		{
			Client = "https://pd2-client-files.projectdiablo2.com/",
			FilePath = "Live"
		};
		if (fileUpdateModel.Client == "https://storage.googleapis.com/storage/v1/b/pd2-client-files/o")
		{
			fileUpdateModel.Client = "https://pd2-client-files.projectdiablo2.com/";
			_localStorage.Update(StorageKey.FileUpdateModel, fileUpdateModel);
		}
		CheckForUpdates();
	}

	private void OnNavigationMessageReceived(NavigationMessage message)
	{
		((UIElement)Overlay).Visibility = (Visibility)2;
		if (message.Action == NavigationAction.GoBack)
		{
			if (MainFrame.CanGoBack)
			{
				MainFrame.GoBack();
			}
			else
			{
				((ContentControl)MainFrame).Content = null;
			}
		}
	}

	private async void CheckForUpdates()
	{
		Directory.GetCurrentDirectory();
		UpdateUIForOperationStart();
		Progress<double> progress = new Progress<double>(delegate(double value)
		{
			((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
			{
				//IL_002b: Unknown result type (might be due to invalid IL or missing references)
				((RangeBase)DownloadProgressBar).Value = value * 100.0;
				if ((int)((UIElement)DownloadProgressBar).Visibility != 0)
				{
					((UIElement)DownloadProgressBar).Visibility = (Visibility)0;
				}
			});
		});
		Action action = ResetUI;
		await UpdateLauncherCheck(_localStorage, progress, action);
	}

	private void ClearNavigationStack()
	{
		while (MainFrame.CanGoBack)
		{
			MainFrame.RemoveBackEntry();
		}
	}

	private void BackgroundImage_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Invalid comparison between Unknown and I4
		if ((int)((MouseEventArgs)e).LeftButton == 1)
		{
			((Window)this).DragMove();
		}
	}

	private async void PlayButton_Click(object sender, RoutedEventArgs e)
	{
		UpdateUIForOperationStart();
		try
		{
			if (Process.GetProcessesByName("Game").Any())
			{
				MessageBox.Show("Game is already running.");
				return;
			}
			SelectedAuthorAndFilter selectedAuthorAndFilter = _localStorage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
			if (selectedAuthorAndFilter?.selectedFilter != null)
			{
				await _filterHelpers.CheckAndUpdateFilterAsync(selectedAuthorAndFilter);
			}
			if (!_localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs).disableAutoUpdate)
			{
				try
				{
					await _gameFileUpdater.UpdateFromShaMetadataAsync(_localStorage, new Progress<double>(UpdateProgress), delegate
					{
					});
					await _fileUpdateHelpers.SyncFilesFromEnvToRoot(_localStorage);
				}
				catch (HttpRequestException)
				{
					MessageBox.Show("Could not check for updates. Proceeding in offline mode.", "Offline Mode", (MessageBoxButton)0, (MessageBoxImage)64);
				}
			}
			_launchGameHelpers.LaunchGame(_localStorage);
		}
		catch (Exception ex2)
		{
			ShowErrorMessage("An error occurred: " + ex2.Message);
		}
		finally
		{
			ResetUI();
		}
	}

	private void UpdateUIForOperationStart()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Expected O, but got Unknown
		try
		{
			Uri uri = new Uri("pack://application:,,,/Resources/Images/updating_disabled.jpg");
			PlayButton.NormalImageSource = (ImageSource)new BitmapImage(uri);
			((UIElement)DownloadProgressBar).Visibility = (Visibility)0;
			((RangeBase)DownloadProgressBar).Value = 0.0;
		}
		catch (UriFormatException)
		{
		}
	}

	private void ResetUI()
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			//IL_0012: Unknown result type (might be due to invalid IL or missing references)
			//IL_001c: Expected O, but got Unknown
			try
			{
				Uri uri = new Uri("pack://application:,,,/Resources/Images/play.jpg");
				PlayButton.NormalImageSource = (ImageSource)new BitmapImage(uri);
			}
			catch (UriFormatException)
			{
			}
			((UIElement)DownloadProgressBar).Visibility = (Visibility)1;
		});
	}

	private void UpdateProgress(double value)
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			((RangeBase)DownloadProgressBar).Value = value * 100.0;
		});
	}

	private void onDownloadComplete()
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			_launchGameHelpers.LaunchGame(_localStorage);
		});
	}

	private void OptionsButton_Click(object sender, RoutedEventArgs e)
	{
		ShowOptionsView();
	}

	private void ShowOptionsView()
	{
		ClearNavigationStack();
		((UIElement)Overlay).Visibility = (Visibility)0;
		MainFrame.Navigate((object)new OptionsView());
	}

	private void ShowLootView()
	{
		ClearNavigationStack();
		((UIElement)Overlay).Visibility = (Visibility)0;
		MainFrame.Navigate((object)new FiltersView());
	}

	private void ShowAboutView()
	{
		ClearNavigationStack();
		((UIElement)Overlay).Visibility = (Visibility)0;
		MainFrame.Navigate((object)new AboutView());
	}

	private void Hyperlink_RequestNavigate(object sender, RequestNavigateEventArgs e)
	{
		Process.Start(new ProcessStartInfo(e.Uri.AbsoluteUri)
		{
			UseShellExecute = true
		});
		((RoutedEventArgs)e).Handled = true;
	}

	private void DonateButton_Click(object sender, RoutedEventArgs e)
	{
		try
		{
			Process.Start(new ProcessStartInfo("https://www.projectdiablo2.com/donate")
			{
				UseShellExecute = true
			});
		}
		catch (Exception)
		{
		}
	}

	private void CloseButton_Click(object sender, RoutedEventArgs e)
	{
		MainWindow_Closed(sender, (EventArgs)(object)e);
		((Window)this).Close();
	}

	private void MinimizeButton_Click(object sender, RoutedEventArgs e)
	{
		((Window)this).WindowState = (WindowState)1;
	}

	private void TextBlock_MouseLeftButtonUp(object sender, MouseButtonEventArgs e)
	{
		TextBlock val = (TextBlock)((sender is TextBlock) ? sender : null);
		if (val != null && ((FrameworkElement)val).Tag is string fileName)
		{
			Process.Start(new ProcessStartInfo(fileName)
			{
				UseShellExecute = true
			});
		}
	}

	private void LoadConfiguration()
	{
		FileUpdateModel fileUpdateModel = _localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel);
		LauncherArgs launcherArgs = _localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs);
		IsBeta = fileUpdateModel?.FilePath == "Beta";
		IsCustom = fileUpdateModel?.FilePath == "Custom";
		IsDisableUpdates = launcherArgs?.disableAutoUpdate ?? false;
		UpdatesNotificationVisibility = (Visibility)((!IsDisableUpdates) ? 2 : 0);
	}

	private void OnConfigurationChanged(ConfigurationChangeMessage message)
	{
		IsBeta = message.IsBeta;
		OnPropertyChanged("IsBeta");
		IsCustom = message.IsCustom;
		OnPropertyChanged("IsCustom");
		UpdatesNotificationVisibility = (Visibility)((!message.IsDisableUpdates) ? 2 : 0);
	}

	private async void MainWindow_Loaded(object sender, RoutedEventArgs e)
	{
		await InitializeAsync();
	}

	private async Task InitializeAsync()
	{
		await _newsHelpers.FetchAndStoreNewsAsync(_localStorage);
		await _newsHelpers.FetchResetInfoAsync(_localStorage);
		List<NewsItem> list = _localStorage.LoadSection<News>(StorageKey.News)?.news ?? new List<NewsItem>();
		AppendResetNewsItemIfApplicable(list);
		((ItemsControl)NewsListBox).ItemsSource = list;
	}

	private void LoadAndUpdateDDrawOptions()
	{
		DdrawOptions value = _dDrawHelpers.ReadDdrawOptions();
		_localStorage.Update(StorageKey.DdrawOptions, value);
	}

	private void NewsListBox_SelectionChanged(object sender, SelectionChangedEventArgs e)
	{
		//IL_0066: Unknown result type (might be due to invalid IL or missing references)
		if (e.AddedItems.Count <= 0 || !(e.AddedItems[0] is NewsItem newsItem))
		{
			return;
		}
		string link = newsItem.Link;
		if (!string.IsNullOrWhiteSpace(link))
		{
			try
			{
				Process.Start(new ProcessStartInfo(link)
				{
					UseShellExecute = true
				});
			}
			catch (Exception ex)
			{
				ShowErrorMessage("Failed to open the link: " + ex.Message + "\nPlease check your internet connection or try again later.");
			}
		}
		((Selector)(ListBox)sender).SelectedItem = null;
	}

	private void CenterWindowOnScreen()
	{
		double primaryScreenWidth = SystemParameters.PrimaryScreenWidth;
		double primaryScreenHeight = SystemParameters.PrimaryScreenHeight;
		((Window)this).Left = (primaryScreenWidth - ((FrameworkElement)this).Width) / 2.0;
		((Window)this).Top = (primaryScreenHeight - ((FrameworkElement)this).Height) / 2.0;
	}

	private void MainWindow_Closed(object sender, EventArgs e)
	{
		WindowPositionModel value = new WindowPositionModel
		{
			Left = ((Window)this).Left,
			Top = ((Window)this).Top
		};
		_localStorage.Update(StorageKey.WindowPosition, value);
	}

	private void EnsureWindowIsVisible()
	{
		WindowPositionModel windowPositionModel = _localStorage.LoadSection<WindowPositionModel>(StorageKey.WindowPosition);
		bool flag = windowPositionModel.Left < SystemParameters.VirtualScreenLeft || windowPositionModel.Top < SystemParameters.VirtualScreenTop || windowPositionModel.Left > SystemParameters.VirtualScreenLeft + SystemParameters.VirtualScreenWidth || windowPositionModel.Top > SystemParameters.VirtualScreenTop + SystemParameters.VirtualScreenHeight;
		if (windowPositionModel == null || flag)
		{
			CenterWindowOnScreen();
			return;
		}
		((Window)this).Left = windowPositionModel.Left;
		((Window)this).Top = windowPositionModel.Top;
	}

	private void InitWindow()
	{
		WindowPositionModel windowPositionModel = _localStorage.LoadSection<WindowPositionModel>(StorageKey.WindowPosition);
		if (windowPositionModel == null || (windowPositionModel.Left == 0.0 && windowPositionModel.Top == 0.0))
		{
			CenterWindowOnScreen();
			return;
		}
		((Window)this).Left = windowPositionModel.Left;
		((Window)this).Top = windowPositionModel.Top;
	}

	private void ShowErrorMessage(string message)
	{
		//IL_0009: Unknown result type (might be due to invalid IL or missing references)
		MessageBox.Show(message, "Error", (MessageBoxButton)0, (MessageBoxImage)16);
	}

	public void InitializeDefaultSettings(ILocalStorage localStorage)
	{
		_localStorage.InitializeIfNotExists(StorageKey.FileUpdateModel, new FileUpdateModel());
		_localStorage.InitializeIfNotExists(StorageKey.DdrawOptions, new DdrawOptions());
		_localStorage.InitializeIfNotExists(StorageKey.LauncherArgs, new LauncherArgs());
		_localStorage.InitializeIfNotExists(StorageKey.SelectedAuthorAndFilter, new SelectedAuthorAndFilter());
		_localStorage.InitializeIfNotExists(StorageKey.Pd2AuthorList, new Pd2AuthorList());
		_localStorage.InitializeIfNotExists(StorageKey.News, new News());
		_localStorage.InitializeIfNotExists(StorageKey.WindowPosition, new WindowPositionModel());
		_localStorage.InitializeIfNotExists(StorageKey.ResetInfo, new ResetInfo());
	}

	protected void OnPropertyChanged(string propertyName)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
	}

	private async Task FetchAndHandleResetInfoAsync()
	{
		await _newsHelpers.FetchResetInfoAsync(_localStorage);
	}

	private void AppendResetNewsItemIfApplicable(List<NewsItem> newsItems)
	{
		ResetInfo resetInfo = _localStorage.LoadSection<ResetInfo>(StorageKey.ResetInfo);
		if (resetInfo != null && resetInfo.ResetData != null)
		{
			DateTime resetTime = resetInfo.ResetData.ResetTime;
			if (resetTime > DateTime.UtcNow)
			{
				string text = resetTime.ToLocalTime().ToString("MMMM dd 'at' hh:mm tt", CultureInfo.InvariantCulture);
				string summary = resetInfo.ResetData.ResetSummary + " " + text + ").";
				NewsItem item = new NewsItem
				{
					Date = resetTime.ToString("MMMM dd, yyyy", CultureInfo.InvariantCulture),
					Title = resetInfo.ResetData.ResetTitle,
					Summary = summary,
					Content = (resetInfo.ResetData.ResetContent ?? "Check out the details for the upcoming season reset."),
					Link = resetInfo.ResetData.ResetLink
				};
				newsItems.Insert(0, item);
			}
		}
	}

	public async Task UpdateLauncherCheck(ILocalStorage _localStorage, IProgress<double> progress, Action onDownloadComplete)
	{
		if (IsDisableUpdates)
		{
			onDownloadComplete?.Invoke();
			return;
		}
		string installPath = Directory.GetCurrentDirectory();
		new List<CloudFileItem>();
		List<CloudFileItem> cloudFileItems;
		try
		{
			File.AppendAllText(Path.Combine(AppContext.BaseDirectory, "launcher-update-debug.log"), $"{DateTime.Now:O}{Environment.NewLine}ProcessPath: {Environment.ProcessPath}{Environment.NewLine}BaseDirectory: {AppContext.BaseDirectory}{Environment.NewLine}WorkingDirectory: {Environment.CurrentDirectory}{Environment.NewLine}MetadataUrl: {"https://pd2-launcher.projectdiablo2.com/launcher_manifest.json"}{Environment.NewLine}" + Environment.NewLine);
			cloudFileItems = await _fileUpdateHelpers.GetCloudFileMetadataAsync("https://pd2-launcher.projectdiablo2.com/launcher_manifest.json");
			if (cloudFileItems == null || cloudFileItems.Count == 0)
			{
				onDownloadComplete?.Invoke();
				return;
			}
		}
		catch (Exception)
		{
			UpdatesNotificationVisibility = (Visibility)0;
			onDownloadComplete?.Invoke();
			return;
		}
		List<string> bigFour = new List<string> { "PD2Launcher.exe", "SteamPD2.exe", "UpdateUtility.exe" };
		bool flag = false;
		foreach (string fileName2 in bigFour)
		{
			CloudFileItem cloudFileItem = cloudFileItems.FirstOrDefault((CloudFileItem i) => i.Name == fileName2);
			if (cloudFileItem != null)
			{
				string text = Path.Combine(installPath, fileName2);
				if (!File.Exists(text))
				{
					flag = true;
					break;
				}
				if (!_fileUpdateHelpers.CompareCRC(text, cloudFileItem.Crc32c))
				{
					flag = true;
					break;
				}
			}
		}
		if (!flag)
		{
			foreach (CloudFileItem cloudItem in cloudFileItems)
			{
				if (!bigFour.Contains(cloudItem.Name) && !_fileUpdateHelpers.IsFileExcluded(cloudItem.Name))
				{
					string text2 = Path.Combine(installPath, cloudItem.Name);
					if ((!File.Exists(text2) || !_fileUpdateHelpers.CompareCRC(text2, cloudItem.Crc32c)) && !(await _fileUpdateHelpers.PrepareLauncherUpdateAsync(cloudItem.MediaLink, text2, progress)))
					{
						MessageBox.Show("Failed to download " + cloudItem.Name + ".", "Update Error", (MessageBoxButton)0, (MessageBoxImage)16);
						onDownloadComplete?.Invoke();
						return;
					}
				}
			}
			onDownloadComplete?.Invoke();
			return;
		}
		foreach (string fileName in bigFour)
		{
			CloudFileItem cloudItem = cloudFileItems.FirstOrDefault((CloudFileItem i) => i.Name == fileName);
			if (cloudItem != null)
			{
				string path = ((fileName == "UpdateUtility.exe") ? fileName : ("Temp" + fileName));
				string tempPath2 = Path.Combine(installPath, path);
				if (!(await _fileUpdateHelpers.PrepareLauncherUpdateAsync(cloudItem.MediaLink, tempPath2, progress)))
				{
					MessageBox.Show("Failed to download " + cloudItem.Name + ".", "Update Error", (MessageBoxButton)0, (MessageBoxImage)16);
					onDownloadComplete?.Invoke();
					return;
				}
			}
		}
		foreach (CloudFileItem cloudItem in cloudFileItems)
		{
			if (!bigFour.Contains(cloudItem.Name) && !_fileUpdateHelpers.IsFileExcluded(cloudItem.Name))
			{
				string text3 = Path.Combine(installPath, cloudItem.Name);
				if ((!File.Exists(text3) || !_fileUpdateHelpers.CompareCRC(text3, cloudItem.Crc32c)) && !(await _fileUpdateHelpers.PrepareLauncherUpdateAsync(cloudItem.MediaLink, text3, progress)))
				{
					MessageBox.Show("Failed to download " + cloudItem.Name + ".", "Update Error", (MessageBoxButton)0, (MessageBoxImage)16);
					onDownloadComplete?.Invoke();
					return;
				}
			}
		}
		List<string> list = new List<string> { "PD2Launcher.exe", "SteamPD2.exe" };
		foreach (string item in list)
		{
			string tempPath = Path.Combine(installPath, "Temp" + item);
			int retries = 0;
			while ((!File.Exists(tempPath) || new FileInfo(tempPath).Length < 32768) && retries++ < 10)
			{
				await Task.Delay(300);
			}
		}
		ShowTopmostMessageBox("Launcher update is ready. The app will now close and update...", "Update Ready");
		_fileUpdateHelpers.StartUpdateProcess();
		await Task.Delay(250);
		Process.GetCurrentProcess().Kill();
	}

	public static void ShowTopmostMessageBox(string message, string title)
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		//IL_0038: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_0063: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Expected O, but got Unknown
		//IL_0084: Unknown result type (might be due to invalid IL or missing references)
		//IL_008e: Expected O, but got Unknown
		string message2 = message;
		string title2 = title;
		Window topmostWindow = new Window
		{
			Width = 0.0,
			Height = 0.0,
			WindowStyle = (WindowStyle)0,
			ShowInTaskbar = false,
			Topmost = true,
			WindowStartupLocation = (WindowStartupLocation)0,
			Left = -1000.0,
			Top = -1000.0
		};
		((FrameworkElement)topmostWindow).Loaded += (RoutedEventHandler)delegate
		{
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			topmostWindow.Hide();
			MessageBox.Show(topmostWindow, message2, title2, (MessageBoxButton)0, (MessageBoxImage)64);
			topmostWindow.Close();
		};
		topmostWindow.Show();
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			Uri uri = new Uri("/PD2Launcher;component/mainwindow.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	internal Delegate _CreateDelegate(Type delegateType, string handler)
	{
		return Delegate.CreateDelegate(delegateType, this, handler);
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	void IComponentConnector.Connect(int connectionId, object target)
	{
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Expected O, but got Unknown
		//IL_007a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_0090: Expected O, but got Unknown
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		//IL_009e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Expected O, but got Unknown
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c0: Expected O, but got Unknown
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ce: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d8: Expected O, but got Unknown
		//IL_00da: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f0: Expected O, but got Unknown
		//IL_00f2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fe: Unknown result type (might be due to invalid IL or missing references)
		//IL_0108: Expected O, but got Unknown
		//IL_010a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0116: Unknown result type (might be due to invalid IL or missing references)
		//IL_0120: Expected O, but got Unknown
		//IL_0123: Unknown result type (might be due to invalid IL or missing references)
		//IL_012d: Expected O, but got Unknown
		//IL_013a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0144: Expected O, but got Unknown
		//IL_016e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0178: Expected O, but got Unknown
		//IL_01a2: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ac: Expected O, but got Unknown
		//IL_01bc: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c6: Expected O, but got Unknown
		//IL_01c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d3: Expected O, but got Unknown
		//IL_01d6: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e0: Expected O, but got Unknown
		switch (connectionId)
		{
		case 1:
			((UIElement)(Image)target).MouseLeftButtonDown += new MouseButtonEventHandler(BackgroundImage_MouseLeftButtonDown);
			break;
		case 2:
			((UIElement)(Image)target).MouseLeftButtonDown += new MouseButtonEventHandler(BackgroundImage_MouseLeftButtonDown);
			break;
		case 3:
			((Hyperlink)target).RequestNavigate += new RequestNavigateEventHandler(Hyperlink_RequestNavigate);
			break;
		case 4:
			((Hyperlink)target).RequestNavigate += new RequestNavigateEventHandler(Hyperlink_RequestNavigate);
			break;
		case 5:
			((Hyperlink)target).RequestNavigate += new RequestNavigateEventHandler(Hyperlink_RequestNavigate);
			break;
		case 6:
			((Hyperlink)target).RequestNavigate += new RequestNavigateEventHandler(Hyperlink_RequestNavigate);
			break;
		case 7:
			((Hyperlink)target).RequestNavigate += new RequestNavigateEventHandler(Hyperlink_RequestNavigate);
			break;
		case 8:
			((Hyperlink)target).RequestNavigate += new RequestNavigateEventHandler(Hyperlink_RequestNavigate);
			break;
		case 9:
			NewsListBox = (ListBox)target;
			((Selector)NewsListBox).SelectionChanged += new SelectionChangedEventHandler(NewsListBox_SelectionChanged);
			break;
		case 10:
			MinimizeButton = (CustomImageButton)target;
			break;
		case 11:
			CloseButton = (CustomImageButton)target;
			break;
		case 12:
			PlayButton = (CustomImageButton)target;
			break;
		case 13:
			DownloadProgressBar = (ProgressBar)target;
			break;
		case 14:
			LootButton = (CustomImageButton)target;
			break;
		case 15:
			OptionsButton = (CustomImageButton)target;
			break;
		case 16:
			DonateButton = (CustomImageButton)target;
			break;
		case 17:
			BetaNotification = (Image)target;
			break;
		case 18:
			AboutButton = (CustomImageButton)target;
			break;
		case 19:
			UpdatesNotification = (Image)target;
			break;
		case 20:
			Overlay = (Rectangle)target;
			break;
		case 21:
			MainFrame = (Frame)target;
			break;
		default:
			_contentLoaded = true;
			break;
		}
	}
}
