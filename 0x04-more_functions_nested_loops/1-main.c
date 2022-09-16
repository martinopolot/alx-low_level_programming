#include "main.h"
#include <stdio.h>

/**
 * main - Calls other functions
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 0;
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %dn", c, _isdigit(c));
	return (0);
}
