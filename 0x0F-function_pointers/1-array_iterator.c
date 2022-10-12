#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - works on fun as a param
 * on  every elem of the array
 * @array: array to iterate
 * @size: array size
 * @action: ptr to the function you need ti use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (!array || !action)
		return;
	for (m = 0; m < size; ++m)
		action(array[m]);
}
