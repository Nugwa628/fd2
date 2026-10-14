using System;
using System.Globalization;
using System.Windows;
using System.Windows.Data;

namespace PD2Launcherv2.Converters;

public class BooleanToVisibilityConverter : IValueConverter
{
	public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
	{
		return (object)(Visibility)((!(value is int num) || num == 0) ? 2 : 0);
	}

	public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
	{
		//IL_0009: Unknown result type (might be due to invalid IL or missing references)
		//IL_000f: Invalid comparison between Unknown and I4
		return value is Visibility && (int)(Visibility)value == 0;
	}
}
