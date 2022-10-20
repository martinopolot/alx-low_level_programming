#include "lists.h"
/**
 * _strlen - displays the leng of a string
 * @s: given strn
 * Return: leng of a string
 */
int _strlen(char *s)
{
	char *ptr = s;

	while (*s)
	{
		s++;
	}
	return (s - ptr);
}
/**
 * add_node - adds new node at the start of list_t
 * @head: Refereces the head lf LL
 * @str: string addedto a new node
 * Return: The addres of eht new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	if (!str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_str);
	new_node->str = new_str;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
