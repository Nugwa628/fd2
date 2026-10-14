using System;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Markup;
using PD2Launcherv2.ViewModels;

namespace PD2Launcherv2.Views;

public class OptionsView : Page, IComponentConnector
{
	internal Button CloseButton;

	internal Button SetWindowsPermissions;

	internal Button RemoveWindowsPermissions;

	internal RadioButton d2gl;

	internal RadioButton ddraw;

	internal CheckBox sndbkg;

	internal CheckBox SkipToBNet;

	internal CheckBox DisableAutoUpdate;

	internal ComboBox Mode;

	internal TextBox Width;

	internal TextBox Height;

	internal TextBox ddrawPosX;

	internal TextBox ddrawPosY;

	internal CheckBox maintasCheckBox;

	internal CheckBox boxingCheckBox;

	internal CheckBox vsyncCheckBox;

	internal CheckBox adjmouseCheckBox;

	internal CheckBox devmodeCheckBox;

	internal CheckBox borderCheckBox;

	internal CheckBox resizeableCheckBox;

	internal Button ShowAdvancedOptionsButton;

	internal CheckBox noActivateAppCheckBox;

	internal CheckBox handleMouseCheckBox;

	internal CheckBox nonExclusiveCheckBox;

	internal ComboBox maxfpsPicker;

	internal ComboBox maxgameticksPicker;

	internal ComboBox savesettingsPicker;

	internal ComboBox rendererPicker;

	internal ComboBox hookPicker;

	internal ComboBox minfpsPicker;

	internal ComboBox shaderPicker;

	internal CheckBox d3d9linearCheckBox;

	internal CheckBox singlecpuCheckBox;

	private bool _contentLoaded;

	public OptionsView()
	{
		InitializeComponent();
		((FrameworkElement)this).DataContext = App.Resolve<OptionsViewModel>();
	}

	private void ComboBox_SelectionChanged(object sender, SelectionChangedEventArgs e)
	{
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			Uri uri = new Uri("/PD2Launcher;component/views/optionsview.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "8.0.7.0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	void IComponentConnector.Connect(int connectionId, object target)
	{
		//IL_0093: Unknown result type (might be due to invalid IL or missing references)
		//IL_009d: Expected O, but got Unknown
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Expected O, but got Unknown
		//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b7: Expected O, but got Unknown
		//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c4: Expected O, but got Unknown
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d1: Expected O, but got Unknown
		//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00de: Expected O, but got Unknown
		//IL_00e1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Expected O, but got Unknown
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f8: Expected O, but got Unknown
		//IL_00fb: Unknown result type (might be due to invalid IL or missing references)
		//IL_0105: Expected O, but got Unknown
		//IL_0108: Unknown result type (might be due to invalid IL or missing references)
		//IL_0112: Expected O, but got Unknown
		//IL_0115: Unknown result type (might be due to invalid IL or missing references)
		//IL_011f: Expected O, but got Unknown
		//IL_0122: Unknown result type (might be due to invalid IL or missing references)
		//IL_012c: Expected O, but got Unknown
		//IL_012f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0139: Expected O, but got Unknown
		//IL_013c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0146: Expected O, but got Unknown
		//IL_0149: Unknown result type (might be due to invalid IL or missing references)
		//IL_0153: Expected O, but got Unknown
		//IL_0156: Unknown result type (might be due to invalid IL or missing references)
		//IL_0160: Expected O, but got Unknown
		//IL_0163: Unknown result type (might be due to invalid IL or missing references)
		//IL_016d: Expected O, but got Unknown
		//IL_0170: Unknown result type (might be due to invalid IL or missing references)
		//IL_017a: Expected O, but got Unknown
		//IL_017d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0187: Expected O, but got Unknown
		//IL_018a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0194: Expected O, but got Unknown
		//IL_0197: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a1: Expected O, but got Unknown
		//IL_01a4: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ae: Expected O, but got Unknown
		//IL_01b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01bb: Expected O, but got Unknown
		//IL_01be: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c8: Expected O, but got Unknown
		//IL_01cb: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d5: Expected O, but got Unknown
		//IL_01d8: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e2: Expected O, but got Unknown
		//IL_01e5: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ef: Expected O, but got Unknown
		//IL_01f2: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fc: Expected O, but got Unknown
		//IL_01ff: Unknown result type (might be due to invalid IL or missing references)
		//IL_0209: Expected O, but got Unknown
		//IL_020c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0216: Expected O, but got Unknown
		//IL_0219: Unknown result type (might be due to invalid IL or missing references)
		//IL_0223: Expected O, but got Unknown
		//IL_0226: Unknown result type (might be due to invalid IL or missing references)
		//IL_0230: Expected O, but got Unknown
		//IL_0233: Unknown result type (might be due to invalid IL or missing references)
		//IL_023d: Expected O, but got Unknown
		switch (connectionId)
		{
		case 1:
			CloseButton = (Button)target;
			break;
		case 2:
			SetWindowsPermissions = (Button)target;
			break;
		case 3:
			RemoveWindowsPermissions = (Button)target;
			break;
		case 4:
			d2gl = (RadioButton)target;
			break;
		case 5:
			ddraw = (RadioButton)target;
			break;
		case 6:
			sndbkg = (CheckBox)target;
			break;
		case 7:
			SkipToBNet = (CheckBox)target;
			break;
		case 8:
			DisableAutoUpdate = (CheckBox)target;
			break;
		case 9:
			Mode = (ComboBox)target;
			break;
		case 10:
			Width = (TextBox)target;
			break;
		case 11:
			Height = (TextBox)target;
			break;
		case 12:
			ddrawPosX = (TextBox)target;
			break;
		case 13:
			ddrawPosY = (TextBox)target;
			break;
		case 14:
			maintasCheckBox = (CheckBox)target;
			break;
		case 15:
			boxingCheckBox = (CheckBox)target;
			break;
		case 16:
			vsyncCheckBox = (CheckBox)target;
			break;
		case 17:
			adjmouseCheckBox = (CheckBox)target;
			break;
		case 18:
			devmodeCheckBox = (CheckBox)target;
			break;
		case 19:
			borderCheckBox = (CheckBox)target;
			break;
		case 20:
			resizeableCheckBox = (CheckBox)target;
			break;
		case 21:
			ShowAdvancedOptionsButton = (Button)target;
			break;
		case 22:
			noActivateAppCheckBox = (CheckBox)target;
			break;
		case 23:
			handleMouseCheckBox = (CheckBox)target;
			break;
		case 24:
			nonExclusiveCheckBox = (CheckBox)target;
			break;
		case 25:
			maxfpsPicker = (ComboBox)target;
			break;
		case 26:
			maxgameticksPicker = (ComboBox)target;
			break;
		case 27:
			savesettingsPicker = (ComboBox)target;
			break;
		case 28:
			rendererPicker = (ComboBox)target;
			break;
		case 29:
			hookPicker = (ComboBox)target;
			break;
		case 30:
			minfpsPicker = (ComboBox)target;
			break;
		case 31:
			shaderPicker = (ComboBox)target;
			break;
		case 32:
			d3d9linearCheckBox = (CheckBox)target;
			break;
		case 33:
			singlecpuCheckBox = (CheckBox)target;
			break;
		default:
			_contentLoaded = true;
			break;
		}
	}
}
