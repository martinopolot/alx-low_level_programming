#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * Description: starting from 00:00 to 23:59
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int b, m;

	for (b = 0; b < 24; b++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
		}
	}
}
