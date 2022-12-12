#include "main.h"

/**
 * _strcat - function to join two strings
 * @dest: destination file
 * @src: source text
 * Return: final file after joining
 */
char *_strcat(char *dest, char *src)
{
	int text1 = 0, text2 = 0;

	while (*(dest + text1) != '\0')
	{
		text1++;
	}
	while (text2 >= 0)
	{
		*(dest + text1) = *(src + text2);
		if (*(src + text2) == '\0')
			break;
		text1++;
		text2++;
	}
	return (dest);
}
