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
	size_t len = 0, i = 0;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->str = strdup(str);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	newnode->len = i++;

	*head = newnode;
	return (*head);
	free(newnode);
}
