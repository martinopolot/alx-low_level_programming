#include "main.h"
/**
 * print_sign - Print a sign of a number
 * @n: int type, positive or negative.
 *
 * Return: 1 if +, 0 if zero, negative 1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
