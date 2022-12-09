#include "lists.h"

/**
 * dlistint_len - Prints length of elements of a dlistint
 *
 * @h: head of the list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int couter;

	couter = 0;

	if (h == NULL)
		return (couter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		couter++;
		h = h->next;
	}

	return  (couter);
}
