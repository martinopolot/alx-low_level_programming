#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: pointer to head of list
 * @index: index of value to be returned
 * Return: node address at index specified
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *presentVal;

	register uint counter = 0;

	presentVal = head;
	while (presentVal)
	{
		if (counter == index)
			return (presentVal);
		counter++;
		presentVal = presentVal->next;
	}
	return (presentVal);
}
