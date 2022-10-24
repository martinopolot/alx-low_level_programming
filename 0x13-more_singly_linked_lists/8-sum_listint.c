#include "lists.h"

/**
 * sum_listint - function that shows the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer to head of list
 * Return: summization of list items
 */
int sum_listint(listint_t *head)
{
	listint_t *presentVal;

	register int sum = 0;

	if (!head)
		return (0);
	presentVal = head;
	while (presentVal)
	{
		sum = sum + presentVal->n;
		presentVal = presentVal->next;
	}
	return (sum);
}
