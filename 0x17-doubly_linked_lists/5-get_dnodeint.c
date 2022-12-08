#include "lists.h"

/**
 * get_dnodeint_at_index - get a node int at index
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: address of the node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodeNinth;
	size_t count = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		++count;
		if (head->next)
		{
			if (count == index)
				nodeNinth = head->next;
		}
		else
			return (NULL);
		head = head->next;
	}
	return (nodeNinth);
}
