#include "main.h"
#include <stdlib.h>
/**
 * _strdup - func that returns a ptr to  allocated space in memory.
 * @str: string char.
 *
 * Return: ptr of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int m, j;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)

	strout = (char *) malloc(sizeof(char) * (m + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= m; j++)
		strout[j] = str[j];

	return (strout);
}
