#include <stddef.h>

/**
 * get_length - Calculates the length of a string
 * @str: Pointer to the string
 *
 * Return: Number of characters in the string
 */
int get_length(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		i++;

	return (i);
}
