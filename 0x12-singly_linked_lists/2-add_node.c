#include <string.h>
#include "lists.h"

/**
 * add_node - adds npde at the beggining
 * @head: address of the first node in the list
 * @str: string to be added
 * Return: address of the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *old = *head;
	unsigned int i = 0;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	else
	{
		newnode->next = old;
		newnode->str = strdup(str);
		while (str[i] != '\0')
		{
			i++;
		}
		newnode->len = i++;


		old = newnode;
	}
	return (old);
	free(newnode);
}
