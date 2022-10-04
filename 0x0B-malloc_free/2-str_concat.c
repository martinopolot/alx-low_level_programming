#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr to newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int m, l, k, n;
	char *s;

	if (s1 == NULL)
		m = 0;
	else
	{
		for (m = 0; s1[m]; m++)
			;
	}
	if (s2 == NULL)
		l = 0;
	else
	{
		for (l = 0; s2[l]; l++)
			;
	}
	k = m + l + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (n = 0; n < m; n++)
		s[n] = s1[n];
	for (n = 0; n < l; n++)
		s[n + m] = s2[n];
	s[n + m] = '\0';
	return (s);
}
