#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -fucntion to insert new node to position.
 * @head: double pointer to the first node in the list
 * @idx: index to the index
 * @n: value of the newNode
 *
 * Return: ptr to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *presentVal, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		presentVal = *head;
		for (; i < idx - 1 && presentVal != NULL; i++)
		{
			presentVal = presentVal->next;
		}
		if (presentVal == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = presentVal->next;
	presentVal->next = new;
	return (new);
}
