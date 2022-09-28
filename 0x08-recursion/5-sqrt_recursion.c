#include "main.h"

/**
 * square_root - formular of sqrt of number
 * @n: input integer
 * @num: root to be validated
 * Return: square root, or -1 if ni=ot a natural number
 */
int square_root(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);

	return (square_root(n, num + 1));
}
/**
 * _sqrt_recursion - recursive function to find sqrt of n
 * @n: integer
 * Return: square root (sqrt), or -1 if not natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(n, 0));
}
