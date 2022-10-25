#include "lists.h"

/**
 * list_len - counts the number of elements in a lish
 * @h: pointer to struct
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
