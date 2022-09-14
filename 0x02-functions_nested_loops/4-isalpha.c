#include "main.h"
/**
 * _isalpha - Checking whether alphabet
 *  contains is a charachter - return 1 for  a leter and 0 if not
 * @c: type int character
 *  Return: 1 if letter
 */
int _island(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
