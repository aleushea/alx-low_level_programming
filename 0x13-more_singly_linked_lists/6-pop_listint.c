#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - a function that deletes the head node.
* @head: pointer double.
* Return: Data.
*/

int pop_listint(listint_t **head)
{
int data = 0;
listint_t *to_be_Deleted;

if (head == NULL)
return (0);
if (*head == NULL)
return (0);
to_be_Deleted = *head;
data = (*head)->n;
*head = (*head)->next;
free(to_be_Deleted);
return (data);
}
