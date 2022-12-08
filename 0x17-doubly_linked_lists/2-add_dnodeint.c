#include "lists.h"

/**
 * add_dnodeint - add a node at the begging to the list
 * @head: the head of the list
 * @n: Data to be added
 *
 * Return: the adress of the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	if ((*head) == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		(*head) = newnode;
	}
	else
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = (*head);
		(*head)->prev = newnode;
		(*head) = NULL;
		(*head) = newnode;
	}
	return (newnode);
}
