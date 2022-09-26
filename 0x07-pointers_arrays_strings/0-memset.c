#include "main.h"

/**
 * _memset - memory setter
 * @s: ptr to char
 * @b: particular data to modify
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
