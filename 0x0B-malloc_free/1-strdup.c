#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to copy string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: ptr to duplicate string || NULL if error
 */
char *_strdup(char *str)
{
	unsigned int m, l;
	char *s;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		;
	m++;
	s = malloc(m * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < m; l++)
	{
		s[l] = str[l];
	}
	return (s);
}
