#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - func to create 2Darray of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double ptr to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int m, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		a[m] = (int *)malloc(sizeof(int) * width);
		if (a[m] == NULL)
		{
			for (l = 0; l < m; l++)
				free(a[l]);
			free(a);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		{
			a[m][l] = 0;
		}
	}
	return (a);
}
