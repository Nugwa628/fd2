using System;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Markup;
using Microsoft.Web.WebView2.Wpf;
using PD2Launcherv2.ViewModels;

namespace PD2Launcherv2.Views;

public class FiltersView : Page, IComponentConnector
{
	internal Button CloseButton;

	internal TextBlock Filter;

	internal ListBox AuthorsListBox;

	internal ListBox FiltersListBox;

	internal WebView2 FilterWebView2;

	private bool _contentLoaded;

	public FiltersView()
	{
		InitializeComponent();
		if (((FrameworkElement)this).DataContext is FiltersViewModel filtersViewModel)
		{
			filtersViewModel.SetWebView2(FilterWebView2);
		}
	}

	private async void FiltersView_Loaded(object sender, RoutedEventArgs e)
	{
		if (((FrameworkElement)this).DataContext is FiltersViewModel filtersViewModel)
		{
			await filtersViewModel.InitializeAsync();
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			Uri uri = new Uri("/PD2Launcher;component/views/filtersview.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	void IComponentConnector.Connect(int connectionId, object target)
	{
		//IL_002f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Expected O, but got Unknown
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Expected O, but got Unknown
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		//IL_0053: Expected O, but got Unknown
		//IL_0056: Unknown result type (might be due to invalid IL or missing references)
		//IL_0060: Expected O, but got Unknown
		//IL_0063: Unknown result type (might be due to invalid IL or missing references)
		//IL_006d: Expected O, but got Unknown
		switch (connectionId)
		{
		case 1:
			((FrameworkElement)(FiltersView)target).Loaded += new RoutedEventHandler(FiltersView_Loaded);
			break;
		case 2:
			CloseButton = (Button)target;
			break;
		case 3:
			Filter = (TextBlock)target;
			break;
		case 4:
			AuthorsListBox = (ListBox)target;
			break;
		case 5:
			FiltersListBox = (ListBox)target;
			break;
		case 6:
			FilterWebView2 = (WebView2)target;
			break;
		default:
			_contentLoaded = true;
			break;
		}
	}
}
