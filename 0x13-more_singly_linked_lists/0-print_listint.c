#include "lists.h"

/**
 * print_listint - prints all int in the list
 * @h: pointer to listint_t
 * Return: size_t numer of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
