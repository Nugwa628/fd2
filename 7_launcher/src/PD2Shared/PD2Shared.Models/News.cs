using System.Collections.Generic;

namespace PD2Shared.Models;

public class News
{
	public string ETag { get; set; } = "null";


	public List<NewsItem> news { get; set; }
}
