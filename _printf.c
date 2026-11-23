#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints formatted output to standard output
 * @format: String containing text and format specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, int_num;
	int length = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case '%': /* %% print % */
					_putchar('%');
					length++;
					i++;
					break;

				case 'd': /* %d print int */
					int_num = va_arg(args, int);
					length += print_int(int_num);
					i++;
					break;

				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
	}

	va_end(args);

	return (length);
}
