#include "lists.h"

/**
 * print_list - prints list
 * @h: pointer to struct
 *
 * Return: length of str
 */

size_t list_len(const list_t *h)
{
	const list_t *nil;
	unsigned int i;

	nil = h;

	for (i = 0; nil; i++)
	i
		nil = nil->next;
	}
	return (i);
}
