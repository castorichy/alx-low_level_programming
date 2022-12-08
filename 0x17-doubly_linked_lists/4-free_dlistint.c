#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head of list
 *
 * Return: Void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tail;

	while (head)
	{
		tail = head;
		head = head->next;
		free(tail);
	}
}
