#include "lists.h"

/**
 * print_list - prints list
 * @h: pointer to struct
 *
 * Return: length of str
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		while (h->str)
			n++;
		printf("%s", h->str);
		h = h->next;
	}
	h++;
	return (n);
}
