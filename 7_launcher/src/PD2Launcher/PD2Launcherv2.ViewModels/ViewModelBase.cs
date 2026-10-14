using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Input;

namespace PD2Launcherv2.ViewModels;

public abstract class ViewModelBase : INotifyPropertyChanged
{
	public ICommand CloseCommand { get; protected set; }

	public event PropertyChangedEventHandler PropertyChanged;

	protected virtual void OnPropertyChanged([CallerMemberName] string propertyName = null)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
	}
}
