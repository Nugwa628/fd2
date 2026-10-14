using PD2Shared.Models;

namespace PD2Shared.Interfaces;

public interface ILocalStorage
{
	AllSettings Load();

	void Update<T>(StorageKey key, T value) where T : class;

	T LoadSection<T>(StorageKey key) where T : class;

	void InitializeIfNotExists<T>(StorageKey key, T defaultValue) where T : class, new();
}
