#include "main.h"
/**
 * _isdigit - Checks if parameter is a number withing 0 - 9
 * @c: Input number
 * Return: 1 if (0 - 9), else something else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

