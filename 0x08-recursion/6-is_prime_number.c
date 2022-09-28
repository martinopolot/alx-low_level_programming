#include "main.h"
/**
 * is_prime - divide by a bigger divisor and skip even numbers
 * @n: Number to be checked if it's prime
 * @divisor: higher number as divisor
 * Return: 1 if prime, 0 if not
 */
int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}
/**
 * is_prime_number - check is number is prime
 * @n: number to be checked
 * Return: 1 if prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}
