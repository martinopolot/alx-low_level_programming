#include "main.h"

/**
 * print_rev - Function to print str in reverse
 * @s: string type
 * Return: Success
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
