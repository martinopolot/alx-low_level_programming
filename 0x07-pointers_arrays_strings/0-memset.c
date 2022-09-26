#include "main.h"

/**
 * _memset - function to set memory value
 * @s: ptr to char
 * @b: data
 * @n: index
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

