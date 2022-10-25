#include "lists.h"

/**
 * list_len - counts the number of elements in a lish
 * @h: pointer to struct
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *head;

	for (i = 0; head != NULL; i++)
	{
		head = head->next;
	}
	return (i);
}
