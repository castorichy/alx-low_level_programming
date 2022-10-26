#include "lists.h"

/**
 * add_nodeint - adds node at the begginng of the list
 * @head: head pointing to the fir node
 * @n: integer to add
 *
 * Return: address of the added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
