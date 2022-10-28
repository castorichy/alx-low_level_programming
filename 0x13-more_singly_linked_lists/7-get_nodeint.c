#include "lists.h"

/**
 * get_nodeint_at_index - get any node at any index
 * @head: address of the first node
 * @index: position of the element needed
 *
 * Return: address of nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index ; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
