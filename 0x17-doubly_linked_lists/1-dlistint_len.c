#include "lists.h"

/**
 * dlistint_len - returns the length of the dlist
 * @h: a pointer to a dlist
 *
 * Return: the length of the dlist
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
