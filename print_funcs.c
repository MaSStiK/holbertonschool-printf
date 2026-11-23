#include <stddef.h>
#include "main.h"

/**
 * print_int - Prints an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_int(int n)
{
	int digit;
	int tens = 1;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
	}
	else
	{
		n *= -1;
	}

	while (n / tens <= -10)
		tens *= 10;

	while (tens > 0)
	{
		digit = (n / tens) * -1;
		_putchar(digit + '0');
		n %= tens;
		tens /= 10;
		count++;
	}

	return (count);
}

/**
 * print_str - Prints a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_str(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
