#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of LL
 * @head: double pointer to head of list
 * @n: integer
 * Return: Node address added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
