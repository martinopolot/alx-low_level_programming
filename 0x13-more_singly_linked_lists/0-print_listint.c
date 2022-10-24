#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: elements
 */
size_t print_listint(const listint_t *h)
{
	register size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		++counter;
	}
	return (counter);
}
