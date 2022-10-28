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
	listint_t *loop;
	unsigned int i;

	if (head)
		loop = head;

	for (i = 0; loop->next ; i++)
	{
		if (loop->next == NULL)
			return (NULL);
		if (i == index)
		{
			head = loop;
		}
		loop = loop->next;
	}
	return (head);
}
