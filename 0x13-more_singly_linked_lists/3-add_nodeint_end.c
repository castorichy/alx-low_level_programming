#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first node
 * @n: integer to be added
 *
 * Return: address of added node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *loop;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	if ((*head) != NULL)
	{
		loop = (*head);

		while (loop->next != NULL)
		{
			loop = loop->next;
		}
		loop->next = newnode;
		newnode->next = NULL;
		newnode->n = n;

	}
	else
	{
		free(newnode);

		*head = malloc(sizeof(listint_t));
		if (!(*head))
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
	}
	return (*head);
}
