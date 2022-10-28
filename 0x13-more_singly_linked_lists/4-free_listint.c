#include "lists.h"

/**
 * free_listint - frees memory allocated
 * @head: pointed allocated memory
*/

void free_listint(listint_t *head)
{
	listint_t *freeit;

	while (head != NULL)
	{
		freeit = head->next;
		free(head);
		head = freeit;
	}
}
