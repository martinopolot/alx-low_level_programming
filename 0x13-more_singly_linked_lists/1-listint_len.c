#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list
 * @h: ptr to the head of list
 * Return: size of elements
 */
size_t listint_len(const listint_t *h)
{
	register size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
