using System.Collections.Generic;
using Newtonsoft.Json;

namespace PD2Shared.Models;

public class FilterDefinitionsDocument
{
	[JsonProperty("filter_info")]
	public Dictionary<string, FilterDefinitionEntry> FilterInfo { get; set; } = new Dictionary<string, FilterDefinitionEntry>();

}
