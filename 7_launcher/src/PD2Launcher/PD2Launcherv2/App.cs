using System;
using System.CodeDom.Compiler;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Text;
using System.Windows;
using System.Windows.Threading;
using Microsoft.Extensions.DependencyInjection;
using PD2Launcherv2.Helpers;
using PD2Launcherv2.ViewModels;
using PD2Shared.Helpers;
using PD2Shared.Interfaces;
using PD2Shared.Models;
using PD2Shared.Storage;

namespace PD2Launcherv2;

public class App : Application
{
	private readonly IServiceProvider _serviceProvider;

	private bool _contentLoaded;

	public static IServiceProvider ServiceProvider { get; private set; }

	public static T Resolve<T>()
	{
		return ((App)(object)Application.Current)._serviceProvider.GetRequiredService<T>();
	}

	public App()
	{
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		//IL_0051: Expected O, but got Unknown
		ServiceCollection services = new ServiceCollection();
		ConfigureServices(services);
		_serviceProvider = services.BuildServiceProvider();
		ServiceProvider = _serviceProvider;
		AppDomain.CurrentDomain.UnhandledException += CurrentDomain_UnhandledException;
		((Application)this).DispatcherUnhandledException += new DispatcherUnhandledExceptionEventHandler(App_DispatcherUnhandledException);
	}

	private static void ConfigureServices(ServiceCollection services)
	{
		services.AddSingleton<ILocalStorage, LocalStorage>();
		services.AddSingleton<FilterHelpers>();
		services.AddSingleton<HttpClient>();
		services.AddSingleton<LaunchGameHelpers>();
		services.AddSingleton<NewsHelpers>();
		services.AddSingleton<DDrawHelpers>();
		services.AddSingleton<GameFileUpdateHelpers>();
		services.AddSingleton((IServiceProvider provider) => new FileUpdateHelpers(provider.GetRequiredService<HttpClient>()));
		services.AddTransient<OptionsViewModel>();
		services.AddTransient<AboutViewModel>();
		services.AddTransient<FiltersViewModel>();
		services.AddTransient<MainWindow>();
	}

	protected override async void OnStartup(StartupEventArgs e)
	{
		CleanUpTempStorageFiles();
		if (Process.GetProcessesByName(Process.GetCurrentProcess().ProcessName).Length > 1)
		{
			MessageBox.Show("An instance of the launcher is already running.");
			((Application)this).Shutdown();
			return;
		}
		if (e.Args.Any((string arg) => arg.Equals("--launch", StringComparison.OrdinalIgnoreCase)))
		{
			ILocalStorage localStorage = _serviceProvider.GetRequiredService<ILocalStorage>();
			FilterHelpers requiredService = _serviceProvider.GetRequiredService<FilterHelpers>();
			FileUpdateHelpers fileUpdateHelpers = _serviceProvider.GetRequiredService<FileUpdateHelpers>();
			LaunchGameHelpers launchGameHelpers = _serviceProvider.GetRequiredService<LaunchGameHelpers>();
			try
			{
				if (Process.GetProcessesByName("Game").Any())
				{
					return;
				}
				SelectedAuthorAndFilter selectedAuthorAndFilter = localStorage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
				if (selectedAuthorAndFilter?.selectedFilter != null)
				{
					await requiredService.CheckAndUpdateFilterAsync(selectedAuthorAndFilter);
				}
				if (!localStorage.LoadSection<LauncherArgs>(StorageKey.LauncherArgs).disableAutoUpdate)
				{
					try
					{
						await fileUpdateHelpers.UpdateFilesCheck(localStorage, new Progress<double>(), delegate
						{
						});
						await fileUpdateHelpers.SyncFilesFromEnvToRoot(localStorage);
					}
					catch (HttpRequestException)
					{
					}
				}
				launchGameHelpers.LaunchGame(localStorage);
				((Application)this).Shutdown();
				return;
			}
			catch (Exception)
			{
				return;
			}
		}
		_003C_003En__0(e);
		MainWindow? service = _serviceProvider.GetService<MainWindow>();
		if (service != null)
		{
			((Window)service).Show();
		}
	}

	private void CurrentDomain_UnhandledException(object sender, UnhandledExceptionEventArgs e)
	{
		LogException(e.ExceptionObject as Exception);
	}

	private void App_DispatcherUnhandledException(object sender, DispatcherUnhandledExceptionEventArgs e)
	{
		LogException(e.Exception);
		e.Handled = true;
	}

	private void CleanUpTempStorageFiles()
	{
		string path = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "AppData");
		if (!Directory.Exists(path))
		{
			return;
		}
		string[] files = Directory.GetFiles(path, "*.tmp");
		foreach (string path2 in files)
		{
			try
			{
				File.Delete(path2);
			}
			catch (Exception)
			{
			}
		}
	}

	private void LogException(Exception ex)
	{
		if (ex != null)
		{
			string path = Path.Combine(Path.Combine(AppDomain.CurrentDomain.BaseDirectory), $"pd2launcher_error__{DateTime.Now:yyyy-MM-dd_HH-mm-ss}.txt");
			MethodBase? obj = (new StackTrace(ex, fNeedFileInfo: true).GetFrames()?.FirstOrDefault())?.GetMethod();
			Type type = obj?.DeclaringType;
			string text = obj?.Name;
			StringBuilder stringBuilder = new StringBuilder();
			stringBuilder.AppendLine("==============================================================================");
			StringBuilder stringBuilder2 = stringBuilder;
			StringBuilder stringBuilder3 = stringBuilder2;
			StringBuilder.AppendInterpolatedStringHandler handler = new StringBuilder.AppendInterpolatedStringHandler(11, 1, stringBuilder2);
			handler.AppendLiteral("Timestamp: ");
			handler.AppendFormatted(DateTime.Now);
			stringBuilder3.AppendLine(ref handler);
			stringBuilder.AppendLine("Exception Class:");
			stringBuilder.AppendLine(type?.FullName ?? "N/A");
			stringBuilder.AppendLine("Exception Method:");
			stringBuilder2 = stringBuilder;
			StringBuilder stringBuilder4 = stringBuilder2;
			handler = new StringBuilder.AppendInterpolatedStringHandler(0, 1, stringBuilder2);
			handler.AppendFormatted(text ?? "N/A");
			stringBuilder4.AppendLine(ref handler);
			stringBuilder.AppendLine("Exception Message:");
			stringBuilder.AppendLine(ex.Message);
			stringBuilder.AppendLine("Stack Trace:");
			stringBuilder.AppendLine(ex.StackTrace);
			if (ex.InnerException != null)
			{
				stringBuilder.AppendLine("Inner Exception Message:");
				stringBuilder.AppendLine(ex.InnerException.Message);
				stringBuilder.AppendLine("Inner Exception Stack Trace:");
				stringBuilder.AppendLine(ex.InnerException.StackTrace);
			}
			stringBuilder.AppendLine("==============================================================================");
			File.AppendAllText(path, stringBuilder.ToString());
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			Uri uri = new Uri("/PD2Launcher;component/app.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[STAThread]
	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	public static void Main()
	{
		App app = new App();
		app.InitializeComponent();
		((Application)app).Run();
	}

	[CompilerGenerated]
	[DebuggerHidden]
	private void _003C_003En__0(StartupEventArgs e)
	{
		((Application)this).OnStartup(e);
	}
}
