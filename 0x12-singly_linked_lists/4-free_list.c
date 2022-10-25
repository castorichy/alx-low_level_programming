#include "lists.h"

/**
 * 
 * 
*/

void free_list(list_t *head)
{
	list_t *freeit = NULL;

	while ((freeit = head) != NULL)
	{
		head = head->next;
		free(freeit->str);
		free(freeit);
	}
}
