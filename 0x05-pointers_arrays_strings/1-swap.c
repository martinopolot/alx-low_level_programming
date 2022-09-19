#include "main.h"

/**
 * swap_int - function to swamp
 * @a: integer a
 * @b: integer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
