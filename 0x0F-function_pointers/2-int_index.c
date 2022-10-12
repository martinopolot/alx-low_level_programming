
#include "function_pointers.h"

/**
 * int_index - Searcher for integer
 * @array: array to be searched
 * size: array size
 * @cmp: ptr to fn to be used to cpm values
 *
 * Return: first elem index
 * if the does return 0, or -1 if no match found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		for (m = 0; m < size; ++m)
		{
			if (cmp(array[m] != 0))
				return (m);
		}
	}
	return (-1);
}
