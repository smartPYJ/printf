#include "main.h"

/**
 * _printf - a function That produces output according to format.
 * @format: a character string
 * Returns: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};
	va_list list_arg;

	if (format == NULL)
		return (-1);

	va_start(list_arg, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, list_arg);
	va_end(list_arg);
	return (printed_chars);
}
