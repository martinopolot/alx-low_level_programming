#include "main.h"
/**
 * print_numbers - function to display numbers (0 - 9)
 *
 * Return: void
 */

int print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
