#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of the list
 * @head: the head of the list
 * @n: Data to be added to the end of the list
 *
 * Return: Adddress of the newnode
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = NULL, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		(*head) = newnode;
	}
	else
	{
		tail = (*head);
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
		newnode->prev = tail;
	}
	return (newnode);
}
