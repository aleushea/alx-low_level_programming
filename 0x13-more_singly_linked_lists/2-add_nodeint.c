#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - a function that adds a new node at
* the beginning of a listint_t list.
* @head: a pointer to a pointer
* @n: Data holder for the node
* Return: pointer to the head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node_added;
if (head == NULL)
return (NULL);
node_added = malloc(sizeof(listint_t));
if (!node_added)
return (NULL);
node_added->n = n;
node_added->next = *head;
*head = node_added;
return (*head);
}
