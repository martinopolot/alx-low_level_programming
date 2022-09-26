#include "main.h"

/**
 * _memset - fill a block of memory with a particular value.
 * @s: pointer to area in memory
 * @b: constant value
 * @n: number of bytes to be filled
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
