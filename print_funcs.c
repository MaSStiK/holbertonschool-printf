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
 * print_binary - Prints an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	char binary[33];
	int i = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	binary[0] = '\0';

	while (n > 0)
	{
		binary[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}

	i--;

	while (binary[i] != '\0')
	{
		_putchar(binary[i]);
		i--;
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
