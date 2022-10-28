#include "lists.h"

/**
 * pop_listint - deletes first node
 * @head: address of the first node
 *
 * Return: the deleated value
*/

int pop_listint(listint_t **head)
{
	listint_t *delete;

	if (!head || !(*head))
		return (0);

	delete = *head;
	*head = delete->next;
	return (delete->n);
	free(delete);
}
