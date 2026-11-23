#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int len, len2;
	unsigned int ui;

	len = _printf("%d\n", -1234);
	len2 = printf("%d\n", -1234);
	printf("Length:[%d, %i]\n", len, len2);

	len = _printf("%d %% %d\n", -1234, 42);
	len2 = printf("%d %% %d\n", -1234, 42);
	printf("Length:[%d, %i]\n", len, len2);

	len = _printf("%s %c\n", "I am a string, and this is a char:", 'W');
	len2 = printf("%s %c\n", "I am a string, and this is a char:", 'W');
	printf("Length:[%d, %i]\n", len, len2);

	printf("\n----- original tests -----\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	return (0);
}
