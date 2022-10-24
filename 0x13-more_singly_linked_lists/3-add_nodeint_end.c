#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of LL
 * @head: double ptr to head of list
 * @n: integer
 * Return: Node address added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *presentVal;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		presentVal = *head;
		while (presentVal->next)
			presentVal = presentVal->next;
		presentVal->next = newNode;
	}
	return (newNode);
}
