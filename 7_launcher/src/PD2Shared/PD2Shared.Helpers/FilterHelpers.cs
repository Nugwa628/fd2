using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using Newtonsoft.Json;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Shared.Helpers;

public class FilterHelpers : IFilterHelpers
{
	private readonly HttpClient _httpClient;

	private readonly ILocalStorage _localStorage;

	private const string FilterAuthorUrl = "https://raw.githubusercontent.com/Project-Diablo-2/LootFilters/main/filters.json";

	public FilterHelpers(HttpClient httpClient, ILocalStorage localStorage)
	{
		_httpClient = httpClient;
		_localStorage = localStorage;
	}

	public async Task<string> FetchFilterContentAsyncForFilterBird(string downloadUrl)
	{
		_ = 1;
		try
		{
			HttpResponseMessage obj = await _httpClient.GetAsync(downloadUrl);
			obj.EnsureSuccessStatusCode();
			return await obj.Content.ReadAsStringAsync();
		}
		catch (Exception)
		{
			return string.Empty;
		}
	}

	private async Task<HttpResponseMessage> GetAsync(string url, string eTag = null)
	{
		HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, url);
		if (!string.IsNullOrWhiteSpace(eTag))
		{
			httpRequestMessage.Headers.IfNoneMatch.Add(new EntityTagHeaderValue("\"" + eTag + "\""));
			httpRequestMessage.Headers.Add("User-Agent", "PD2Launcherv2");
		}
		return await _httpClient.SendAsync(httpRequestMessage);
	}

	private async Task<HttpResponseMessage> GetFilterListAsync(string url)
	{
		HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, url);
		httpRequestMessage.Headers.Add("User-Agent", "PD2Launcherv2");
		return await _httpClient.SendAsync(httpRequestMessage);
	}

	private bool IsBetaLauncher()
	{
		return string.Equals(_localStorage.LoadSection<FileUpdateModel>(StorageKey.FileUpdateModel)?.FilePath, "Beta", StringComparison.OrdinalIgnoreCase);
	}

	private async Task<FilterDefinitionsDocument?> FetchFilterDefinitionsAsync(string downloadUrl)
	{
		_ = 1;
		try
		{
			HttpResponseMessage obj = await _httpClient.GetAsync(downloadUrl);
			obj.EnsureSuccessStatusCode();
			return JsonConvert.DeserializeObject<FilterDefinitionsDocument>(await obj.Content.ReadAsStringAsync());
		}
		catch (Exception)
		{
			return null;
		}
	}

	private List<FilterFile> BuildLegacyFilterList(List<FilterFile> filterFiles)
	{
		foreach (FilterFile filterFile in filterFiles)
		{
			filterFile.DisplayName = filterFile.Name;
			filterFile.Description = string.Empty;
			filterFile.FilterId = string.Empty;
		}
		return filterFiles;
	}

	private async Task<List<FilterFile>> BuildFilterListAsync(List<FilterFile> repoFiles)
	{
		List<FilterFile> filterFiles = repoFiles.Where((FilterFile f) => f.Name.EndsWith(".filter", StringComparison.OrdinalIgnoreCase)).ToList();
		List<FilterFile> legacyList = BuildLegacyFilterList(filterFiles);
		FilterFile filterFile = repoFiles.FirstOrDefault((FilterFile f) => f.Name.Equals("filter_definitions.json", StringComparison.OrdinalIgnoreCase));
		if (filterFile == null)
		{
			return legacyList;
		}
		FilterDefinitionsDocument filterDefinitionsDocument = await FetchFilterDefinitionsAsync(filterFile.DownloadUrl);
		if (filterDefinitionsDocument?.FilterInfo == null || filterDefinitionsDocument.FilterInfo.Count == 0)
		{
			return legacyList;
		}
		bool isBeta = IsBetaLauncher();
		List<FilterFile> list = new List<FilterFile>();
		foreach (KeyValuePair<string, FilterDefinitionEntry> item in filterDefinitionsDocument.FilterInfo)
		{
			string key = item.Key;
			FilterDefinitionEntry value = item.Value;
			string resolvedFileName = value.ResolveFileName(isBeta);
			FilterFile filterFile2 = filterFiles.FirstOrDefault((FilterFile f) => f.Name.Equals(resolvedFileName, StringComparison.OrdinalIgnoreCase));
			if (filterFile2 != null)
			{
				filterFile2.FilterId = key;
				filterFile2.DisplayName = (string.IsNullOrWhiteSpace(value.DisplayName) ? filterFile2.Name : value.DisplayName);
				filterFile2.Description = value.Description ?? string.Empty;
				list.Add(filterFile2);
			}
		}
		return (list.Count > 0) ? list : legacyList;
	}

	private async Task<FilterFile?> ResolveRemoteFilterAsync(SelectedAuthorAndFilter selected)
	{
		SelectedAuthorAndFilter selected2 = selected;
		HttpResponseMessage httpResponseMessage = await GetFilterListAsync(selected2.selectedAuthor.Url);
		if (!httpResponseMessage.IsSuccessStatusCode)
		{
			return null;
		}
		List<FilterFile> repoFiles = JsonConvert.DeserializeObject<List<FilterFile>>(await httpResponseMessage.Content.ReadAsStringAsync()) ?? new List<FilterFile>();
		List<FilterFile> source = await BuildFilterListAsync(repoFiles);
		if (!string.IsNullOrWhiteSpace(selected2.selectedFilterId))
		{
			FilterFile filterFile = source.FirstOrDefault((FilterFile f) => string.Equals(f.FilterId, selected2.selectedFilterId, StringComparison.OrdinalIgnoreCase));
			if (filterFile != null)
			{
				return filterFile;
			}
		}
		if (selected2.selectedFilter != null)
		{
			return source.FirstOrDefault((FilterFile f) => string.Equals(f.Name, selected2.selectedFilter.Name, StringComparison.OrdinalIgnoreCase));
		}
		return null;
	}

	public async Task<List<FilterFile>> FetchFilterContentsAsync(string url)
	{
		_ = 2;
		try
		{
			HttpResponseMessage httpResponseMessage = await GetFilterListAsync(url);
			if (httpResponseMessage.IsSuccessStatusCode)
			{
				List<FilterFile> repoFiles = JsonConvert.DeserializeObject<List<FilterFile>>(await httpResponseMessage.Content.ReadAsStringAsync()) ?? new List<FilterFile>();
				return await BuildFilterListAsync(repoFiles);
			}
		}
		catch (Exception)
		{
		}
		return null;
	}

	public async Task FetchAndStoreFilterAuthorsAsync()
	{
		_ = 1;
		try
		{
			string eTag = _localStorage.LoadSection<Pd2AuthorList>(StorageKey.Pd2AuthorList)?.StorageETag ?? string.Empty;
			HttpResponseMessage response = await GetAsync("https://raw.githubusercontent.com/Project-Diablo-2/LootFilters/main/filters.json", eTag);
			if (response.StatusCode == HttpStatusCode.NotModified)
			{
				Console.WriteLine($"Code 304? {304}");
				Console.WriteLine("Filter authors data not changed.");
			}
			else if (response.IsSuccessStatusCode)
			{
				List<FilterAuthor> list = JsonConvert.DeserializeObject<List<FilterAuthor>>(await response.Content.ReadAsStringAsync());
				string storageETag = response.Headers.ETag?.Tag?.Trim('"');
				if (list != null)
				{
					Pd2AuthorList value = new Pd2AuthorList
					{
						StorageETag = storageETag,
						StorageAuthorList = list
					};
					_localStorage.Update(StorageKey.Pd2AuthorList, value);
					Console.WriteLine("Filter authors data updated.");
				}
			}
			else
			{
				Console.WriteLine("Failed to fetch filter authors.");
			}
		}
		catch (Exception ex)
		{
			Console.WriteLine("Error fetching filter authors: " + ex.Message);
		}
	}

	private async Task<bool> DownloadFileAsync(string downloadUrl, string targetPath)
	{
		_ = 1;
		try
		{
			HttpResponseMessage httpResponseMessage = await _httpClient.GetAsync(downloadUrl, HttpCompletionOption.ResponseHeadersRead);
			httpResponseMessage.EnsureSuccessStatusCode();
			using (FileStream fileStream = new FileStream(targetPath, FileMode.Create, FileAccess.Write, FileShare.None))
			{
				await httpResponseMessage.Content.CopyToAsync(fileStream);
			}
			return true;
		}
		catch (Exception)
		{
			return false;
		}
	}

	public async Task<bool> ApplyLootFilterAsync(string author, string filterName, string downloadUrl, bool updateNeeded)
	{
		try
		{
			string currentDirectory = Directory.GetCurrentDirectory();
			string path = Path.Combine(currentDirectory, "filters");
			string text = Path.Combine(path, "local");
			string text2 = Path.Combine(path, "online");
			string defaultFilterPath = Path.Combine(currentDirectory, "loot.filter");
			Directory.CreateDirectory(text);
			Directory.CreateDirectory(text2);
			string targetFilterPath;
			if (author.Equals("Local Filter", StringComparison.OrdinalIgnoreCase))
			{
				targetFilterPath = Path.Combine(text, filterName);
			}
			else
			{
				targetFilterPath = Path.Combine(text2, filterName);
				if ((updateNeeded || !File.Exists(targetFilterPath)) && !(await DownloadFileAsync(downloadUrl, targetFilterPath)))
				{
					return false;
				}
			}
			File.Copy(targetFilterPath, defaultFilterPath, overwrite: true);
			return true;
		}
		catch (Exception)
		{
			return false;
		}
	}

	public bool ForceInstallLocalFilters()
	{
		SelectedAuthorAndFilter selectedAuthorAndFilter = _localStorage.LoadSection<SelectedAuthorAndFilter>(StorageKey.SelectedAuthorAndFilter);
		string currentDirectory = Directory.GetCurrentDirectory();
		string path = Path.Combine(Path.Combine(currentDirectory, "filters"), "local");
		string destFileName = Path.Combine(currentDirectory, "loot.filter");
		if (selectedAuthorAndFilter.selectedAuthor.Author.Equals("Local Filter", StringComparison.OrdinalIgnoreCase))
		{
			File.Copy(Path.Combine(path, selectedAuthorAndFilter.selectedFilter.Name), destFileName, overwrite: true);
			return true;
		}
		return false;
	}

	public async Task<bool> CheckAndUpdateFilterAsync(SelectedAuthorAndFilter selected)
	{
		_ = 1;
		try
		{
			if (selected.selectedAuthor.Name == "Local Filter")
			{
				return ForceInstallLocalFilters();
			}
			FilterFile targetFilter = await ResolveRemoteFilterAsync(selected);
			if (targetFilter == null)
			{
				return false;
			}
			bool flag = string.Equals(targetFilter.Sha, selected.selectedFilter?.Sha, StringComparison.OrdinalIgnoreCase) || await ApplyLootFilterAsync(selected.selectedAuthor.Name, targetFilter.Name, targetFilter.DownloadUrl, updateNeeded: true);
			if (flag)
			{
				selected.selectedFilter = targetFilter;
				if (!string.IsNullOrWhiteSpace(targetFilter.FilterId))
				{
					selected.selectedFilterId = targetFilter.FilterId;
				}
				_localStorage.Update(StorageKey.SelectedAuthorAndFilter, selected);
			}
			return flag;
		}
		catch (Exception)
		{
			return false;
		}
		finally
		{
			_ = 0;
		}
	}
}
