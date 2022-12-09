#include "lists.h"

/**
 * sum_dlistint - sum list
 * @head: the head of the list
 *
 * Return: return the sum of the lists
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
