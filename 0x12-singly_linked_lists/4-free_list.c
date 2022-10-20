#include "lists.h"

/**
 * free_list - This frees a list_t
 * @head: start of list_t list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *presentHead = head;
	list_t *next;

	while (presentHead)
	{
		next = presentHead->next;
		free(presentHead->str);
		free(presentHead);
		presentHead = next;
	}
	head = NULL;
}
