#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - functon that deletes node at index
 * of a listint_t linked list.
 * @head: double ptr to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *presentVal, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	presentVal = *head;
	for (; i < index - 1; i++)
	{
		if (presentVal->next == NULL)
			return (-1);
		presentVal = presentVal->next;
	}
	next = presentVal->next;
	presentVal->next = next->next;
	free(next);
	return (1);
}
