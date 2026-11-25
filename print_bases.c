#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary
 * @n: Unsigned Integer to print
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
 * print_octal - Prints an unsigned integer in octal
 * @n: Unsigned Integer to print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	char octal[33];
	int i = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	octal[0] = '\0';

	while (n > 0)
	{
		octal[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	i--;

	while (octal[i] != '\0')
	{
		_putchar(octal[i]);
		i--;
		count++;
	}

	return (count);
}

/**
 * print_hex - Prints an unsigned integer in hexadecimal
 * @n: Unsigned integer to print
 * @uppercase: 1 for uppercase, 0 for lowercase
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	char hex[33];
	int i = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	hex[0] = '\0';

	while (n > 0)
	{
		if (n % 16 < 10)
			hex[i] = (n % 16) + '0';
		else
			hex[i] = 'a' + (n % 16 - 10) - (32 * uppercase);

		n /= 16;
		i++;
	}

	i--;

	while (hex[i] != '\0')
	{
		_putchar(hex[i]);
		i--;
		count++;
	}

	return (count);
}