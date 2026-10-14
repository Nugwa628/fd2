using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;

namespace PD2Launcherv2.CustomControl;

public class CustomImageButton : Button
{
	public static readonly DependencyProperty NormalImageSourceProperty;

	public static readonly DependencyProperty PressedImageSourceProperty;

	public ImageSource NormalImageSource
	{
		get
		{
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0011: Expected O, but got Unknown
			return (ImageSource)((DependencyObject)this).GetValue(NormalImageSourceProperty);
		}
		set
		{
			((DependencyObject)this).SetValue(NormalImageSourceProperty, (object)value);
		}
	}

	public ImageSource PressedImageSource
	{
		get
		{
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0011: Expected O, but got Unknown
			return (ImageSource)((DependencyObject)this).GetValue(PressedImageSourceProperty);
		}
		set
		{
			((DependencyObject)this).SetValue(PressedImageSourceProperty, (object)value);
		}
	}

	static CustomImageButton()
	{
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Expected O, but got Unknown
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Expected O, but got Unknown
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0075: Expected O, but got Unknown
		NormalImageSourceProperty = DependencyProperty.Register("NormalImageSource", typeof(ImageSource), typeof(CustomImageButton), new PropertyMetadata((object)null));
		PressedImageSourceProperty = DependencyProperty.Register("PressedImageSource", typeof(ImageSource), typeof(CustomImageButton), new PropertyMetadata((object)null));
		FrameworkElement.DefaultStyleKeyProperty.OverrideMetadata(typeof(CustomImageButton), (PropertyMetadata)new FrameworkPropertyMetadata((object)typeof(CustomImageButton)));
	}
}
