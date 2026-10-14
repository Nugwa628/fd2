using System.Text.Json.Serialization;

namespace PD2Shared.Helpers;

public class CloudFileItem
{
	[JsonPropertyName("name")]
	public string Name { get; set; }

	[JsonPropertyName("mediaLink")]
	public string MediaLink { get; set; }

	[JsonPropertyName("crc32c")]
	public string Crc32c { get; set; }
}
