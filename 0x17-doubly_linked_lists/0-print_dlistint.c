#include "lists.h"

/**
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);

	while(h)
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