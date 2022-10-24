#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *presentVal;
	listint_t *temp;

	if (!head)
		return;
	presentVal = *head;
	while (presentVal)
	{
		temp = presentVal;
		presentVal = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
