#include "main.h"

/**
 * flip_bits - function that prints number of bits you
 * need to flip to get from one number to another
 * @n: first input unsigned long
 * @m: second input unsigned long
 * Return: number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int flip = 0;

	while (i)
	{
		if (1 & i)
			flip++;
		i = i >> 1;
	}

	return (flip);
}
