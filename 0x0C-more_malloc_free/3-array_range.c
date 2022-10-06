#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - function to create array of ints
 * @min: minimum value
 * @max: maximum value
 * Return: array given
 */
int *array_range(int min, int max)
{
	int *array, i = 0, m = min;

	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (0);
	while (i <= max - min)
		array[i++] = m++;
	return (array);
}
