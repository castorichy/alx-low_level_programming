#include "lists.h"

/**
 * print_list - prints list
 * @h: pointer to struct
 *
 * Return: length of str
 */

size_t print_list(const list_t *h)
{
	const list_t *nil;
	size_t i;

	nil = h;

	for (i = 0; nil ;i++)
	{
		if (nil->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", nil->len, nil->str);
		nil = nil->next;
	}
	return (i);
}
