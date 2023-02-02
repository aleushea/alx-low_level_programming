#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *this_node, *tempo, *head;
	size_t total, index;

	if (h == NULL || *h == NULL)
		return (0);

	this_node = *h;
	head = *h;
	total = 0;

	while (head != NULL)
	{
		tempo = *h;
		for (index = 0; index < total; index++)
		{
			if (tempo == this_node)
			{
				*h = NULL;
				return (total);
			}
			tempo = tempo->next;
		}
		this_node = head->next;
		free(head);
		head = this_node;
		total++;
	}
	*h = NULL;
	return (total);
}
