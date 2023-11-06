#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *my_ht = ht;
	hash_node_t *node, *my_node;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				my_node	 = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = my_node;
			}
		}
		i++;
	}
	free(my_ht->array);
	free(my_ht);
}
