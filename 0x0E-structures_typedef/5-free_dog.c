#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free memory
 * @m: array
 * Retrun: free memory
 */
void free_dog(dog_t *m)
{
	if (m)
	{
		free(m->name);
		free(m->owner);
		free(m);
	}
}
