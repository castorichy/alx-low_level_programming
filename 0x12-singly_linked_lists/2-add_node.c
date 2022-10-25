#include "lists.h"

/**
 * add_node - adds npde at the beggining
 * @head: address of the first node in the list
 * @str: string to be added
 * Return: address of the new node
*/

list_t *add_node(list_t **head, const char *str)
{
    list_t *newnode;
    list_t *old = head;

    newnode = malloc(sizeof(list_t));
    if (!newnode)
    {
        return (NULL);
    }
    else
    {
        newnode = str;
        newnode = old->next;
        old = newnode;
    }
    return (&newnode);
}
