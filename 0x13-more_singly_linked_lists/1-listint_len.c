#include "lists.h"

/**
 * listint_len - prints all int in the list
 * @h: pointer to listint_t
 * Return: size_t numer of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
