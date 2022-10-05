#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: destination file
 * @src: source file
 * @n: bytes
 * Return: copied file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
