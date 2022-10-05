#include "main.h"

/**
 * _strstr - Function to locate a substring
 * @haystack: ptr to char
 * @needle: ptr to char
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *res = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (res);
		}
		needle = fneedle;
		res++;
		haystack = res;
	}
	return (0);
}
