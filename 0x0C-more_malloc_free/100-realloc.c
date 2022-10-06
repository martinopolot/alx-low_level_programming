#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - function to reallocate mem using realloc()
 * @ptr: ptr
 * @old_size: olde size
 * @new_size: new size
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch, *relloc;
	unsigned int m;

	if (ptr != NULL)
		ch = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (m = 0; m < (old_size || m < new_size); m++)
	{
		*(relloc + m) = ch[m];
	}
	free(ptr);
return (relloc);
}


