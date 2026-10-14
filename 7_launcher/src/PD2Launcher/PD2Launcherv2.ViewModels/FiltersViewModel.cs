using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using Microsoft.Web.WebView2.Wpf;
using PD2Launcherv2.Enums;
using PD2Launcherv2.Helpers;
using PD2Shared.Helpers;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Launcherv2.ViewModels;

public class FiltersViewModel : ViewModelBase
{
	private readonly FilterHelpers _filterHelpers;

	private readonly ILocalStorage _localStorage;

	private WebView2 _filterWebView2;

	private bool _isWebViewVisible;

	private List<FilterAuthor> _authorsList;

	private FilterAuthor _selectedAuthor;

	private List<FilterFile> _filtersList;

	private FilterFile _selectedFilter;

	private string _changeProperty;

	public RelayCommand SaveFilterCommand { get; private set; }

	public RelayCommand OpenAuthorsPageCommand { get; private set; }

	public RelayCommand OpenHelpPageCommand { get; private set; }

	public RelayCommand CopyToLocalCommand { get; private set; }

	public RelayCommand FilterPreviewICommand { get; private set; }

	public ICommand OpenFilterBirdCommand { get; }

	public ICommand CloseFilterPreviewCommand { get; }

	public bool IsWebViewVisible
	{
		get
		{
			return _isWebViewVisible;
		}
		set
		{
			_isWebViewVisible = value;
			OnPropertyChanged("IsWebViewVisible");
		}
	}

	public List<FilterAuthor> AuthorsList
	{
		get
		{
			return _authorsList;
		}
		set
		{
			if (_authorsList != value)
			{
				_authorsList = value;
				OnPropertyChanged("AuthorsList");
			}
		}
	}

	public FilterAuthor SelectedAuthor
	{
		get
		{
			return _selectedAuthor;
		}
		set
		{
			if (_selectedAuthor != value)
			{
				_selectedAuthor = value;
				OnPropertyChanged("SelectedAuthor");
				FetchDataFromAuthorUrl(value.Url);
			}
		}
	}

	public List<FilterFile> FiltersList
	{
		get
		{
			return _filtersList;
		}
		set
		{
			_filtersList = value;
			OnPropertyChanged("FiltersList");
			SelectStoredFilter();
		}
	}

	public FilterFile SelectedFilter
	{
		get
		{
			return _selectedFilter;
		}
		set
		{
			if (_selectedFilter != value)
			{
				_selectedFilter = value;
				OnPropertyChanged("SelectedFilter");
				SaveFilterToStorage();
			}
		}
	}

	public string ChangeProperty
	{
		get
		{
			return _changeProperty;
		}
		set
		{
			if (_changeProperty != value)
			{
				_changeProperty = value;
				OnPropertyChanged("ChangeProperty");
			}
		}
	}

	public RelayCommand AuthorCall { get; private set; }

	public RelayCommand FilterCall { get; private set; }

	public FiltersViewModel(ILocalStorage localStorage)
	{
		base.CloseCommand = new RelayCommand(CloseView);
		_localStorage = localStorage;
		_filterHelpers = new FilterHelpers(new HttpClient(), _localStorage);
		SaveFilterCommand = new RelayCommand(SaveFilterExecute);
		OpenAuthorsPageCommand = new RelayCommand(OpenAuthorsPageExecute);
		OpenHelpPageCommand = new RelayCommand(OpenHelpPageExecute);
		FilterPreviewICommand = new RelayCommand(OpenFilterPreviewIExecute);
		OpenFilterBirdCommand = new RelayCommand(OpenFilterBird);
		CloseFilterPreviewCommand = new RelayCommand(CloseFilterPreview);
		CopyToLocalCommand = new RelayCommand(CopyFilterToLocalExecute);
		IsWebViewVisible = false;
	}

	public async Task InitializeAsync()
	{
		await FetchAndStoreFilterAuthorsAsync();
		SelectStoredAuthorAndFilter();
	}

	private void CheckLocalFilterTooltip()
	{
		//IL_002b: Unknown result type (might be due to invalid IL or missing references)
		if (SelectedAuthor?.Name == "Local Filter")
		{
			MessageBox.Show("Note: Local filters do not receive automatic updates.", "Info", (MessageBoxButton)0, (MessageBoxImage)64);
		}
	}

	public void SetWebView2(WebView2 webView2)
	{
		_filterWebView2 = webView2;
	}

	private async void OpenFilterBird()
	{
		if (SelectedFilter == null)
		{
			return;
		}
		string remoteUrl = "https://equa1itype4ce.github.io/filterbird/";
		try
		{
			if (_filterWebView2 != null)
			{
				if (_filterWebView2.CoreWebView2 == null)
				{
					await _filterWebView2.EnsureCoreWebView2Async(null);
				}
				string sanitizedFilterContent = (await _filterHelpers.FetchFilterContentAsyncForFilterBird(SelectedFilter.DownloadUrl)).Replace("\\", "\\\\").Replace("'", "\\'").Replace("\"", "\\\"")
					.Replace("\n", "\\n")
					.Replace("\r", "\\r");
				IsWebViewVisible = true;
				_filterWebView2.Source = new Uri(remoteUrl);
				_filterWebView2.CoreWebView2.NavigationCompleted += async delegate
				{
					string javaScript = "document.getElementById('filter_text_1').innerHTML = '" + sanitizedFilterContent + "';";
					await _filterWebView2.CoreWebView2.ExecuteScriptAsync(javaScript);
					await _filterWebView2.CoreWebView2.ExecuteScriptAsync("loadedFromApp();");
				};
			}
		}
		catch (Exception)
		{
		}
	}

	private void CloseFilterPreview()
	{
		IsWebViewVisible = false;
		_filterWebView2.CoreWebView2.NavigateToString("");
	}

	private void OpenHelpPageExecute()
	{
		OpenUrlInBrowser("https://github.com/Project-Diablo-2/LootFilters");
	}

	private void OpenFilterPreviewIExecute()
	{
		OpenUrlInBrowser("https://github.com/Equa1ityPe4ce/filterbird");
	}

	private void SelectStoredAuthorAndFilter()
	{
		SelectedAuthorAndFilter storedSelection = _localStorage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
		if (storedSelection?.selectedAuthor != null)
		{
			SelectedAuthor = AuthorsList.FirstOrDefault((FilterAuthor a) => a.Author == storedSelection.selectedAuthor.Author);
		}
	}

	private void SelectStoredFilter()
	{
		if (SelectedAuthor == null || FiltersList == null)
		{
			return;
		}
		SelectedAuthorAndFilter storedSelection = _localStorage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
		if (storedSelection == null)
		{
			return;
		}
		if (!string.IsNullOrWhiteSpace(storedSelection.selectedFilterId))
		{
			SelectedFilter = FiltersList.FirstOrDefault((FilterFile f) => string.Equals(f.FilterId, storedSelection.selectedFilterId, StringComparison.OrdinalIgnoreCase));
		}
		if (SelectedFilter == null && storedSelection.selectedFilter != null)
		{
			SelectedFilter = FiltersList.FirstOrDefault((FilterFile f) => string.Equals(f.Name, storedSelection.selectedFilter.Name, StringComparison.OrdinalIgnoreCase));
		}
	}

	private async void FetchDataFromAuthorUrl(string url)
	{
		if (SelectedAuthor.Name == "Local Filter")
		{
			LoadLocalFilters();
			return;
		}
		List<FilterFile> list = await _filterHelpers.FetchFilterContentsAsync(url);
		if (list != null)
		{
			FiltersList = list;
		}
	}

	private async Task FetchAndStoreFilterAuthorsAsync()
	{
		await _filterHelpers.FetchAndStoreFilterAuthorsAsync();
		LoadAuthorsFromStorage();
		Pd2AuthorList pd2AuthorList = _localStorage.LoadSection<Pd2AuthorList>(StorageKey.Pd2AuthorList);
		if (pd2AuthorList?.StorageAuthorList != null)
		{
			List<FilterAuthor> list = new List<FilterAuthor>
			{
				new FilterAuthor
				{
					Name = "Local Filter",
					Url = "local",
					Author = "Local Filter"
				}
			};
			list.AddRange(pd2AuthorList.StorageAuthorList);
			AuthorsList = list;
		}
	}

	private void LoadAuthorsFromStorage()
	{
		Pd2AuthorList pd2AuthorList = _localStorage.LoadSection<Pd2AuthorList>(StorageKey.Pd2AuthorList);
		if (pd2AuthorList?.StorageAuthorList != null)
		{
			AuthorsList = pd2AuthorList.StorageAuthorList;
		}
	}

	private void LoadLocalFilters()
	{
		string path2 = Path.Combine(Directory.GetCurrentDirectory(), "filters", "local");
		if (Directory.Exists(path2))
		{
			List<FilterFile> filtersList = (from path in Directory.EnumerateFiles(path2, "*.filter")
				select new FilterFile
				{
					Name = Path.GetFileName(path),
					DisplayName = Path.GetFileName(path),
					Description = string.Empty,
					Path = path
				}).ToList();
			FiltersList = filtersList;
		}
	}

	private async void CopyFilterToLocalExecute()
	{
		if (SelectedFilter == null || SelectedAuthor == null)
		{
			MessageBox.Show("Please select a filter to copy.", "No Filter Selected", (MessageBoxButton)0, (MessageBoxImage)48);
		}
		else
		{
			if ((int)MessageBox.Show("Applying Local Filter: Note that a local filter will not receive automatic updates unless you manually update it.\n\nDo you want to proceed with copying this filter to local storage?", "Copy Filter to Local", (MessageBoxButton)1, (MessageBoxImage)48) != 1)
			{
				return;
			}
			try
			{
				string localPath = Path.Combine(Directory.GetCurrentDirectory(), "filters", "local", SelectedFilter.Name);
				Directory.CreateDirectory(Path.GetDirectoryName(localPath) ?? string.Empty);
				await File.WriteAllTextAsync(localPath, await _filterHelpers.FetchFilterContentAsyncForFilterBird(SelectedFilter.DownloadUrl));
				SelectedAuthor = AuthorsList.FirstOrDefault((FilterAuthor author) => author.Name == "Local Filter");
			}
			catch (Exception ex)
			{
				MessageBox.Show("Failed to copy filter to local storage: " + ex.Message, "Error", (MessageBoxButton)0, (MessageBoxImage)16);
			}
		}
	}

	private void SaveFilterToStorage()
	{
		if (SelectedAuthor != null && SelectedFilter != null)
		{
			SelectedAuthorAndFilter value = new SelectedAuthorAndFilter
			{
				selectedAuthor = SelectedAuthor,
				selectedFilter = SelectedFilter,
				selectedFilterId = SelectedFilter.FilterId
			};
			_localStorage.Update(StorageKey.SelectedAuthorAndFilter, value);
		}
	}

	private void CloseView()
	{
		Messenger.Default.Send(new NavigationMessage
		{
			Action = NavigationAction.GoBack
		});
	}

	private async void SaveFilterExecute()
	{
		SaveFilterToStorage();
		if (SelectedFilter != null && SelectedAuthor != null && await _filterHelpers.ApplyLootFilterAsync(SelectedAuthor.Name, SelectedFilter.Name, SelectedFilter.DownloadUrl, updateNeeded: true))
		{
			SaveFilterToStorage();
			Messenger.Default.Send(new NavigationMessage
			{
				Action = NavigationAction.GoBack
			});
		}
	}

	private async void OpenAuthorsPageExecute()
	{
		if (SelectedAuthor != null && !string.IsNullOrEmpty(SelectedAuthor.Url))
		{
			string url = SelectedAuthor.Url.Replace("api.github.com/repos", "github.com").Replace("/contents", "");
			OpenUrlInBrowser(url);
		}
	}

	private void OpenUrlInBrowser(string url)
	{
		if (url == "local")
		{
			return;
		}
		try
		{
			Process.Start(new ProcessStartInfo(url)
			{
				UseShellExecute = true
			});
		}
		catch (Exception)
		{
		}
	}
}
