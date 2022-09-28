#include "main.h"
/**
 * _pow_recursion - recursive function to print pow
 * @i: integer input
 * @j: integer input - power of
 * Return: return pow
 */
int _pow_recursion(int i, int j)
{
	if (j < 0)

		return (-1);
	if (j == 0)

		return (1);
	return (i * _pow_recursion(i, j - 1));
}
