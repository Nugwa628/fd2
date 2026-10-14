using System;
using System.Globalization;
using System.Windows.Data;

namespace PD2Launcherv2.Converters;

public class InverseBooleanConverter : IValueConverter
{
	public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
	{
		if (value is bool flag)
		{
			return !flag;
		}
		return value;
	}

	public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
	{
		if (value is bool flag)
		{
			return !flag;
		}
		return value;
	}
}
