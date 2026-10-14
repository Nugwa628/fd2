using System;
using System.IO;
using System.Net.Http;
using System.Threading.Tasks;

namespace PD2Shared.Helpers;

public static class HttpFileHelper
{
	private static readonly HttpClient _client = new HttpClient();

	public static async Task<bool> FileNeedsUpdateAsync(string remoteUrl, string localPath)
	{
		if (!File.Exists(localPath))
		{
			Console.WriteLine("[UpdateCheck] Local file '" + localPath + "' is missing.");
			return true;
		}
		HttpRequestMessage request = new HttpRequestMessage(HttpMethod.Head, remoteUrl);
		HttpResponseMessage httpResponseMessage = await _client.SendAsync(request);
		if (!httpResponseMessage.IsSuccessStatusCode)
		{
			Console.WriteLine($"[UpdateCheck] HEAD request failed: {httpResponseMessage.StatusCode}");
			return true;
		}
		long? contentLength = httpResponseMessage.Content.Headers.ContentLength;
		long length = new FileInfo(localPath).Length;
		Console.WriteLine($"[UpdateCheck] Remote Size: {contentLength}, Local Size: {length}");
		return contentLength != length;
	}
}
