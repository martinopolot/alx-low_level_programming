#include "lists.h"

/**
 * list_len - Returns the number of elems in list_t
 * @h: head of LL
 * Return: list of elements in list_t
 */
size_t list_len(const list_t *h)
{
	register unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
