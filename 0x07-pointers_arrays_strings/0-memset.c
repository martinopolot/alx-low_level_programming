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
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
