#include "lists.h"

/**
 *free_listint - A function that frees list.
 * @head: head.
 */
void free_listint(listint_t *head)
{
listint_t *to_be_free;
while (head != NULL)
{
to_be_free = head;
head = head->next;
free(to_be_free);
}
}
