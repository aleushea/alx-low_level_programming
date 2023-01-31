#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the
* data (n) of a listint_t linked list.
* @head: the head.
* Return: Always (0) success.
*/
int sum_listint(listint_t *head)
{
unsigned int Sum_off_all_List = 0;
while (head)
{
Sum_off_all_List += head->n;
head = head->next;
}
return (Sum_off_all_List);
}
