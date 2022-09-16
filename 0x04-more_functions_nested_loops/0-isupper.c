#include "main.h"
/**
 * _isupper - verify is character if either uppercase or lowercase
 * @c: character type
 * Return: returns 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
