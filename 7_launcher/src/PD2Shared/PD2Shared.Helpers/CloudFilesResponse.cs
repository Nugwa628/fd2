using System.Collections.Generic;
using System.Text.Json.Serialization;

namespace PD2Shared.Helpers;

public class CloudFilesResponse
{
	[JsonPropertyName("items")]
	public List<CloudFileItem> Items { get; set; }
}
