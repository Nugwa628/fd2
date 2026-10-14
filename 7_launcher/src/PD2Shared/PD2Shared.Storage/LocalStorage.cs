using System;
using System.IO;
using Newtonsoft.Json;
using PD2Shared.Interfaces;
using PD2Shared.Models;

namespace PD2Shared.Storage;

public class LocalStorage : ILocalStorage
{
	private const string StorageFileName = "launcherSettings.json";

	private readonly string _storageDirectory = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "AppData");

	public AllSettings Load()
	{
		string text = Path.Combine(_storageDirectory, "launcherSettings.json");
		string text2 = text + ".backup";
		if (!File.Exists(text))
		{
			return new AllSettings();
		}
		try
		{
			AllSettings? result = JsonConvert.DeserializeObject<AllSettings>(File.ReadAllText(text)) ?? throw new JsonException("Deserialized settings are null.");
			File.Copy(text, text2, overwrite: true);
			return result;
		}
		catch (JsonException)
		{
			if (File.Exists(text2))
			{
				try
				{
					return JsonConvert.DeserializeObject<AllSettings>(File.ReadAllText(text2)) ?? new AllSettings();
				}
				catch
				{
				}
			}
			return new AllSettings();
		}
	}

	public void Update<T>(StorageKey key, T value) where T : class
	{
		AllSettings allSettings = Load();
		switch (key)
		{
		case StorageKey.LauncherArgs:
			allSettings.LauncherArgs = (value as LauncherArgs) ?? new LauncherArgs();
			break;
		case StorageKey.DdrawOptions:
			allSettings.DdrawOptions = (value as DdrawOptions) ?? new DdrawOptions();
			break;
		case StorageKey.FileUpdateModel:
			allSettings.FileUpdateModel = (value as FileUpdateModel) ?? new FileUpdateModel();
			break;
		case StorageKey.SelectedAuthorAndFilter:
			allSettings.SelectedAuthorAndFilter = (value as SelectedAuthorAndFilter) ?? new SelectedAuthorAndFilter();
			break;
		case StorageKey.Pd2AuthorList:
			allSettings.Pd2AuthorList = (value as Pd2AuthorList) ?? new Pd2AuthorList();
			break;
		case StorageKey.News:
			allSettings.News = (value as News) ?? new News();
			break;
		case StorageKey.WindowPosition:
			allSettings.WindowPosition = (value as WindowPositionModel) ?? new WindowPositionModel();
			break;
		case StorageKey.ResetInfo:
			allSettings.ResetInfo = (value as ResetInfo) ?? new ResetInfo();
			break;
		}
		if (!Directory.Exists(_storageDirectory))
		{
			Directory.CreateDirectory(_storageDirectory);
		}
		string text = Path.Combine(_storageDirectory, "launcherSettings.json");
		string text2 = text + ".tmp";
		try
		{
			string text3 = JsonConvert.SerializeObject(allSettings, Formatting.Indented);
			if (IsValidJson(text3))
			{
				File.WriteAllText(text2, text3);
				File.Replace(text2, text, null);
			}
		}
		catch (Exception)
		{
		}
	}

	public T LoadSection<T>(StorageKey key) where T : class
	{
		AllSettings allSettings = Load();
		return key switch
		{
			StorageKey.LauncherArgs => (allSettings.LauncherArgs as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.DdrawOptions => (allSettings.DdrawOptions as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.FileUpdateModel => (allSettings.FileUpdateModel as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.Pd2AuthorList => (allSettings.Pd2AuthorList as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.SelectedAuthorAndFilter => (allSettings.SelectedAuthorAndFilter as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.WindowPosition => (allSettings.WindowPosition as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.News => (allSettings.News as T) ?? Activator.CreateInstance<T>(), 
			StorageKey.ResetInfo => (allSettings.ResetInfo as T) ?? Activator.CreateInstance<T>(), 
			_ => Activator.CreateInstance<T>(), 
		};
	}

	public void InitializeIfNotExists<T>(StorageKey key, T defaultValue) where T : class, new()
	{
		if (!Directory.Exists(_storageDirectory))
		{
			Directory.CreateDirectory(_storageDirectory);
		}
		string text = Path.Combine(_storageDirectory, "launcherSettings.json");
		string destFileName = text + ".backup";
		string text2 = text + ".tmp";
		if (File.Exists(text))
		{
			return;
		}
		try
		{
			AllSettings allSettings = new AllSettings();
			switch (key)
			{
			case StorageKey.LauncherArgs:
				allSettings.LauncherArgs = (defaultValue as LauncherArgs) ?? new LauncherArgs();
				break;
			case StorageKey.DdrawOptions:
				allSettings.DdrawOptions = (defaultValue as DdrawOptions) ?? new DdrawOptions();
				break;
			case StorageKey.FileUpdateModel:
				allSettings.FileUpdateModel = (defaultValue as FileUpdateModel) ?? new FileUpdateModel();
				break;
			case StorageKey.SelectedAuthorAndFilter:
				allSettings.SelectedAuthorAndFilter = (defaultValue as SelectedAuthorAndFilter) ?? new SelectedAuthorAndFilter();
				break;
			case StorageKey.Pd2AuthorList:
				allSettings.Pd2AuthorList = (defaultValue as Pd2AuthorList) ?? new Pd2AuthorList();
				break;
			case StorageKey.News:
				allSettings.News = (defaultValue as News) ?? new News();
				break;
			case StorageKey.WindowPosition:
				allSettings.WindowPosition = (defaultValue as WindowPositionModel) ?? new WindowPositionModel();
				break;
			case StorageKey.ResetInfo:
				allSettings.ResetInfo = (defaultValue as ResetInfo) ?? new ResetInfo();
				break;
			}
			string contents = JsonConvert.SerializeObject(allSettings, Formatting.Indented);
			File.WriteAllText(text2, contents);
			File.Move(text2, text);
			File.Copy(text, destFileName, overwrite: true);
		}
		catch (Exception)
		{
		}
	}

	private bool IsValidJson(string json)
	{
		try
		{
			JsonConvert.DeserializeObject(json);
			return true;
		}
		catch (JsonException)
		{
			return false;
		}
	}
}
