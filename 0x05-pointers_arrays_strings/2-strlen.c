#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: String of length
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
