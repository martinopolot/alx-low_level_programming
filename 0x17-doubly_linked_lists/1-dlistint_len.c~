#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint
 *
 * @h: head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int couter;

	couter = 0;

	if (h == NULL)
		return (couter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		couter++;
		h = h->next;
	}

	return  (couter);
}
