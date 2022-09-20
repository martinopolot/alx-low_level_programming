#include "main.h"

/**
 * _strcpy - Copies the strinf ptr to dest from the source
 * @dest: destination
 * @src: source
 * Return: character with a string copy
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; *(src + index) != '\0'; index++)
	{
		dest[index] = *(src + index);
	}
	dest[index] = '\0';

	return (dest);
}
