#include "main.h"

/**
 * factorial - function to display factor of integer
 * @i: inger value given
 * Return: Recursive answer
 */

int factorial(int i)
{
	if (i < 0)

		return (-1);
	if (i == 1)

		return (1);
	return (i * factorial(i - 1));
}
