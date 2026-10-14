using System.Collections.Generic;

namespace PD2Shared.Models;

public sealed class FilterSoundsCache
{
	public string Name { get; set; }

	public Dictionary<string, string> ShaByPath { get; set; } = new Dictionary<string, string>();

}
