#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: destination text
 * @src: source text
 * @n: number of joins
 * Return: On  success
 */
char *_strncat(char *dest, char *src, int n)
{
	int text1 = 0, text2 = 0;

	while (*(dest + text1) != '\0')
	{
		text1++;
	}
	while (text2 < n)
	{
		*(dest + text1) = *(src + text2);
		if (*(src + text2) == '\0')
			break;
		text1++;
		text2++;
	}
	return (dest);
}
