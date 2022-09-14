#include "main.h"
/**
 * _isalpha - returns 1 if char c is alphabet
 * @c: character
 * Return: 1 if alphabet, 0 if not.
 */
int _island(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
