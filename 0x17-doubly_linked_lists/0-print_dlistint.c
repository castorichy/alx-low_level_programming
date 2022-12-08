#include "lists.h"

/**
 * print_dlistint - print a contents in douly linked list
 * @h: pointer to head
 *
 * Return: length of node traversed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);

	while (h)
	{
		if (!h->next)
			printf("%d\n", h->n);
		else
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
