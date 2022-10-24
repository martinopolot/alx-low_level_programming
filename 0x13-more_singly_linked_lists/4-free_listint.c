#include "lists.h"

/**
 * free_listint - function to free memory from LL
 * @head: ptr to head list provided
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
