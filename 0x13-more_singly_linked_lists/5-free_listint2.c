#include "lists.h"

/**
 * free_listint2 - frees memory and set it to null
 * @head: pointer allocated
*/
void free_listint2(listint_t **head)
{
	listint_t *freeit;

	while ((*head) != NULL)
	{
		freeit = (*head)->next;
		free(*head);
		*head = freeit;

	}
	*head = NULL;
}
