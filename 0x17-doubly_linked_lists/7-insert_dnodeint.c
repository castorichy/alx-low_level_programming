#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: pointer to head
 * @idx: index of node
 * @n: value to insert
 *
 * Return: address of node inserted
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tail = NULL;
	unsigned int count;

	(void)count;
	newnode = malloc(sizeof(dlistint_t));
	if (!h || !newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	tail = *h;

	if (!idx)
	{
		newnode->prev = NULL;
		newnode->next = (tail) ? tail : NULL;
		if (tail)
			tail->prev = newnode;
		return (*h = newnode);
	}
	while (tail)
	{
		if (idx - 1 == 0)
		{
			if (tail->next != NULL)
			{
				newnode->next = tail->next;
				tail->next->prev = newnode;
			}
			newnode->prev = tail;
			tail->next = newnode;
			return (newnode);
		}
		tail = tail->next;
		idx--;
	}
	return (free(newnode), NULL);
}
