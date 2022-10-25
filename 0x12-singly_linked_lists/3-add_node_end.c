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
	list_t *newnode, *nextto;
	size_t n = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	if ((*head) == NULL)
	{
		free(newnode);
		(*head) = malloc(sizeof(list_t));
		if ((*head) == NULL)
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		n = strlen(str);
		(*head)->len = n;
		(*head)->next = NULL;
	}
	else
	{
		nextto = (*head);
		while ((nextto)->next != NULL)
		{
			(nextto) = (nextto)->next;
		}
		(nextto)->next = newnode;

		newnode->next = NULL;
		newnode->str = strdup(str);
		n = strlen(str);
		newnode->len = n;
	}
	return ((*head));
}
