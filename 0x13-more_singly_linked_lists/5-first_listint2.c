#include "lists.h"

/**
 *free_listint2 - A function to free list.
 * @head: head.
 */

void free_listint2(listint_t **head)
{
listint_t *to_be_free;

if (!head)
return;

while (*head != NULL)
{
to_be_free = *head;
*head = (*head)->next;
free(to_be_free);
}
}
