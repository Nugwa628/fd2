using System;
using System.Globalization;
using System.Windows.Data;

namespace PD2Launcherv2.Converters;

public class StringToIntConverter : IValueConverter
{
	public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
	{
		return value?.ToString() ?? string.Empty;
	}

	public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
	{
		if (int.TryParse(value as string, out var result))
		{
			return result;
		}
		return 0;
	}
}
