#include "lists.h"

/**
 * print_list - prints list
 * @h: pointer to struct
 *
 * Return: length of str
 */

size_t print_list(const list_t *h)
{

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		h++;
	}

	return (n);
}
