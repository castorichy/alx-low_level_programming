#include "lists.h"
#include <string.h>

/**
 *  add_node_end - adds a node at the end of the element
 * @head: pointer that points to onother pointer
 * @str: string to be added
 *
 * Return: address newly added
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	size_t n = 0;

	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	while (*str)
	{
		n++;
		str++;
	}

	while ((*head)->next != NULL)
	{
		(*head)->next = *head;
	}
	*head = newnode->next;
	newnode->len = n++;

	return (*head);
}
