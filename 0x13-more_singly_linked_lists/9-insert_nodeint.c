#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: the head.
 * @idx: index of list.
 * @n: the integer.
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *node, *Temp_Node;

if (!head && !*head)
return (NULL);
Temp_Node = *head;
if (idx == i)
{
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = *head;
*head = node;
return (node);
}
else
{
while (Temp_Node)
{
if (idx == i + 1)
{
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = Temp_Node->next;
Temp_Node->next = node;
return (node);
}
Temp_Node = Temp_Node->next;
i++;
}
}
return (NULL);
}
