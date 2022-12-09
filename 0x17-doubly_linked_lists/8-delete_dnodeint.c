#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in the list ot index
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: return 1 if the node was deleted else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tail = NULL;

	if (head)
	{
		tail = *head;
		if (index < 1)
		{
			if (!tail)
				return (-1);
			*head = tail->next;
			if (*head)
				(*head)->prev = NULL;
			return (free(tail), 1);
		}
	}
	tail = *head;
	while (tail)
	{
		if (index - 1 == 0)
		{
			if (tail->next)
			{
				tail->next->prev = tail->prev;
				tail->prev->next = tail->next;
				tail->next = NULL;
				tail->prev = NULL;
				return (1);
			}
			else
			{
				tail->prev->next = NULL;
				tail->prev = NULL;
				return (1);
			}
		}
		tail = tail->next;
		index--;
	}
	return (1);
}
