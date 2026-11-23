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
	int i;
	int length = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* If % is the last character, print nothing */
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}

			switch (format[i + 1])
			{
				case '%': /* %% print a % symbol */
					_putchar('%');
					length++;
					i++;
					break;

				case 'd': /* %d print int */
					length += print_int(va_arg(args, int));
					i++;
					break;

				case 'c': /* %c print char (promoted to int in va_arg) */
					_putchar(va_arg(args, int));
					length++;
					i++;
					break;

				case 's': /* %s print string (char *) */
					length += print_str(va_arg(args, char *));
					i++;
					break;

				default: /* Print an unsupported format specifier */
					_putchar('%');
					_putchar(format[i + 1]);
					length += 2;
					i++;
					break;
			}
		}
		else
		{	/* Print a regular character */
			_putchar(format[i]);
			length++;
		}
	}

	va_end(args);

	return (length);
}
