#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create array of chars.
 * @size: size of the array.
 * @c: char varaible
 *
 * Return: ptr of char array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
