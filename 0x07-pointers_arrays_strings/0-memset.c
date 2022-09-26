#include "main.h"

/**
 * _memset - fills a block of memory with constant byte
 * @s: points to constant
 * @b: byte
 * @n: bytes in memory
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
