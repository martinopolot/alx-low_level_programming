#include "lists.h"

/**
 * a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to head of list;
 * Return: Current value at head
 */
int pop_listint(listint_t **head)
{
	listint_t *presentVal;
	int result;

	if (!(*head) || !head)
		return (0);
	presentVal = *head;
	result = presentVal->n;
	*head = (*head)->next;
	free(presentVal);
	return (result);
}
