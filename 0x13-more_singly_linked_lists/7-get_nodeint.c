#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: input.
 * @index: the returning index.
 * Return: NUll
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int quantity = 0;

listint_t *Temp_Node;

while (head)
{
Temp_Node = head;
if (quantity == index)
return (Temp_Node);
head = head->next;
quantity++;
}
return (NULL);
}
