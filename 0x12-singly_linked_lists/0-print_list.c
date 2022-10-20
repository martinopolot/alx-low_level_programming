#include "lists.h"
#include "lists.h"

/**
 * print_list - displays a simple list/linkedlist
 * @h: header of the linked list
 * Return: length of a string
 */
size_t print_list(const list_t *h)
{


	register int len = 0;

	while (h)
	{
		(!h->str)
			? printf("[0] (nil)\n")
			: printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);

}
