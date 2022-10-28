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
	int n;

	if (!head || !(*head))
		return (EXIT_SUCCESS);

	delete = *head;
	*head = delete->next;
	n = delete->n;
	free(delete);
	return (n);
}
