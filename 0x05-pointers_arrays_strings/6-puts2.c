#include "main.h"

/**
 * puts2 - Function displays 1 char out of 2 of a string.
 * @str: The string containing characters.
 * Return: On Success
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
