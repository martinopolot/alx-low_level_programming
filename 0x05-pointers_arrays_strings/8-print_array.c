#include "main.h"
#include <stdio.h>
/**
 * print_array - Function to display elements in an array
 * @a: array input
 * @n: elements input
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
