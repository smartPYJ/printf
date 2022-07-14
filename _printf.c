#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - a function That produces output according to format.
 * @format: a character string with funtn specifier
 * Returns: The number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	int i = 0;
	int j = 0;

	int count = 0;
	char *str = NULL;

	va_start(args, format);

	{
		if(format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if(format[i+1] == 'c')
			{
			_putchar(va_arg(args, int));
			count++;
			i++;
			}
		else if (format[i+1] == 's')
		{
			i++;
			str = va_arg(args, char *);
			j = 0;
			while (str[j])
			{
			_putchar(str[j]);
			count++;
			j++;
			}
		}
		else if (format[i+1] == '%')
		{
			i++;
			_putchar('%');
			count++;
		}
		}
		i++;
	}

	va_end(args);

	return (count);
}
