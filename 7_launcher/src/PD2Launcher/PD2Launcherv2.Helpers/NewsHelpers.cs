using System;
using System.Collections.Generic;
using System.Globalization;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using Newtonsoft.Json;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Launcherv2.Helpers;

public class NewsHelpers
{
	private readonly HttpClient _httpClient;

	public NewsHelpers()
	{
		_httpClient = (HttpClient)App.ServiceProvider.GetService(typeof(HttpClient));
	}

	public async Task FetchAndStoreNewsAsync(ILocalStorage _localStorage)
	{
		_ = 1;
		try
		{
			string requestUri = "https://raw.githubusercontent.com/Project-Diablo-2/news/main/news.json";
			News news = _localStorage.LoadSection<News>(StorageKey.News);
			using HttpClient httpClient = new HttpClient();
			HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, requestUri);
			if (!string.IsNullOrEmpty(news?.ETag) && news.ETag != "null")
			{
				httpRequestMessage.Headers.IfNoneMatch.Add(new EntityTagHeaderValue("\"" + news.ETag + "\""));
			}
			HttpResponseMessage response = await httpClient.SendAsync(httpRequestMessage);
			if (response.StatusCode == HttpStatusCode.NotModified)
			{
				return;
			}
			if (!response.IsSuccessStatusCode)
			{
				return;
			}
			List<NewsItem> list = JsonConvert.DeserializeObject<List<NewsItem>>(await response.Content.ReadAsStringAsync());
			if (list == null)
			{
				return;
			}
			foreach (NewsItem item in list)
			{
				if (DateTime.TryParse(item.Date, null, DateTimeStyles.AssumeUniversal, out var result))
				{
					item.Date = result.ToString("MMMM dd, yyyy", CultureInfo.InvariantCulture);
				}
			}
			string eTag = response.Headers.ETag?.Tag?.Trim('"');
			News value = new News
			{
				ETag = eTag,
				news = list
			};
			_localStorage.Update(StorageKey.News, value);
		}
		catch (Exception)
		{
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

	public async Task<ResetInfo> FetchResetInfoAsync(ILocalStorage _localStorage)
	{
		string requestUri = "https://raw.githubusercontent.com/Project-Diablo-2/news/main/reset.json";
		ResetInfo currentResetInfoData = _localStorage.LoadSection<ResetInfo>(StorageKey.ResetInfo);
		HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, requestUri);
		if (!string.IsNullOrEmpty(currentResetInfoData?.ETag) && currentResetInfoData.ETag != "null")
		{
			httpRequestMessage.Headers.IfNoneMatch.Add(new EntityTagHeaderValue("\"" + currentResetInfoData.ETag + "\""));
		}
		try
		{
			HttpResponseMessage response = await _httpClient.SendAsync(httpRequestMessage);
			if (response.StatusCode == HttpStatusCode.NotModified)
			{
				return currentResetInfoData;
			}
			if (response.IsSuccessStatusCode)
			{
				ResetItem resetData = JsonConvert.DeserializeObject<ResetItem>(await response.Content.ReadAsStringAsync());
				string eTag = response.Headers.ETag?.Tag?.Trim('"');
				ResetInfo resetInfo = new ResetInfo
				{
					ETag = eTag,
					ResetData = resetData
				};
				_localStorage.Update(StorageKey.ResetInfo, resetInfo);
				return resetInfo;
			}
			return currentResetInfoData;
		}
		catch (HttpRequestException)
		{
			return currentResetInfoData;
		}
		catch (Exception)
		{
			return currentResetInfoData;
		}
	}

	public void InsertResetNewsItemIfApplicable(ILocalStorage _localStorage, List<NewsItem> newsItems)
	{
		ResetInfo resetInfo = _localStorage.LoadSection<ResetInfo>(StorageKey.ResetInfo);
		if (resetInfo != null && resetInfo.ResetData != null && resetInfo.ResetData.ResetTime > DateTime.UtcNow)
		{
			NewsItem item = new NewsItem
			{
				Date = resetInfo.ResetData.ResetTime.ToString("MMMM dd, yyyy", CultureInfo.InvariantCulture),
				Title = resetInfo.ResetData.ResetTitle,
				Summary = resetInfo.ResetData.ResetSummary,
				Content = resetInfo.ResetData.ResetContent,
				Link = resetInfo.ResetData.ResetLink
			};
			newsItems.Insert(0, item);
		}
	}
}
