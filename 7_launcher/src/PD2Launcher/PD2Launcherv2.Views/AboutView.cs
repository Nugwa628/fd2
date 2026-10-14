using System;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Threading;
using PD2Launcherv2.ViewModels;

namespace PD2Launcherv2.Views;

public class AboutView : Page, IComponentConnector
{
	private DispatcherTimer _holdTimer;

	private DateTime _holdStartTime;

	private const int RequiredHoldSeconds = 10;

	internal Button CloseButton;

	internal TextBlock About;

	internal Button CustomUnlockButton;

	internal TextBox CustomClientUrlTextBox;

	internal Button SetCustomEnvButton;

	private bool _contentLoaded;

	public AboutView()
	{
		InitializeComponent();
		((FrameworkElement)this).DataContext = App.Resolve<AboutViewModel>();
	}

	private void CustomUnlockButton_MouseDown(object sender, MouseButtonEventArgs e)
	{
		//IL_000c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0016: Expected O, but got Unknown
		_holdStartTime = DateTime.Now;
		_holdTimer = new DispatcherTimer();
		_holdTimer.Interval = TimeSpan.FromMilliseconds(100.0);
		_holdTimer.Tick += CheckHoldDuration;
		_holdTimer.Start();
	}

	private void CustomUnlockButton_MouseUp(object sender, MouseButtonEventArgs e)
	{
		CancelHold();
	}

	private void CustomUnlockButton_MouseLeave(object sender, MouseEventArgs e)
	{
		CancelHold();
	}

	private void CheckHoldDuration(object sender, EventArgs e)
	{
		if ((DateTime.Now - _holdStartTime).TotalSeconds >= 10.0)
		{
			_holdTimer.Stop();
			_holdTimer.Tick -= CheckHoldDuration;
			if (((FrameworkElement)this).DataContext is AboutViewModel aboutViewModel)
			{
				aboutViewModel.ShowCustomEnv = !aboutViewModel.ShowCustomEnv;
			}
		}
	}

	private void CancelHold()
	{
		if (_holdTimer != null)
		{
			_holdTimer.Stop();
			_holdTimer.Tick -= CheckHoldDuration;
			_holdTimer = null;
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			Uri uri = new Uri("/PD2Launcher;component/views/aboutview.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	void IComponentConnector.Connect(int connectionId, object target)
	{
		//IL_0023: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Expected O, but got Unknown
		//IL_0030: Unknown result type (might be due to invalid IL or missing references)
		//IL_003a: Expected O, but got Unknown
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0047: Expected O, but got Unknown
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_005e: Expected O, but got Unknown
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0075: Expected O, but got Unknown
		//IL_0082: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Expected O, but got Unknown
		//IL_008f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0099: Expected O, but got Unknown
		//IL_009c: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a6: Expected O, but got Unknown
		switch (connectionId)
		{
		case 1:
			CloseButton = (Button)target;
			break;
		case 2:
			About = (TextBlock)target;
			break;
		case 3:
			CustomUnlockButton = (Button)target;
			((UIElement)CustomUnlockButton).PreviewMouseLeftButtonDown += new MouseButtonEventHandler(CustomUnlockButton_MouseDown);
			((UIElement)CustomUnlockButton).PreviewMouseLeftButtonUp += new MouseButtonEventHandler(CustomUnlockButton_MouseUp);
			((UIElement)CustomUnlockButton).MouseLeave += new MouseEventHandler(CustomUnlockButton_MouseLeave);
			break;
		case 4:
			CustomClientUrlTextBox = (TextBox)target;
			break;
		case 5:
			SetCustomEnvButton = (Button)target;
			break;
		default:
			_contentLoaded = true;
			break;
		}
	}
}
