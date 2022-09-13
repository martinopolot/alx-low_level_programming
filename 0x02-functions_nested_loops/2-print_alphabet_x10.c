#include "main.h"
/**
 * print_alphabet_x10 - function displays alphabet (10 times)
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 0)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		counter++;
		_putchar('\n');
	}
}
