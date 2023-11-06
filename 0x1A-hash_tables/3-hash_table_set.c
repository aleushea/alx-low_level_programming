#include "hash_tables.h"

/**
 * hash_table_set - Add element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *my_element;
	char *my_value;
	unsigned long int i, KeyIndex;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	my_value = strdup(value);
	if (my_value == NULL)
		return (0);

	KeyIndex = key_index((const unsigned char *)key, ht->size);

	i = KeyIndex;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = my_value;
			return (1);
		}
		i++;
	}
	my_element = malloc(sizeof(hash_node_t));
	if (my_element == NULL)
	{
		free(my_value);
		return (0);
	}
	my_element->key = strdup(key);
	if (my_element->key == NULL)
	{
		free(my_element);
		return (0);
	}
	my_element->value = my_value;
	my_element->next = ht->array[KeyIndex];
	ht->array[KeyIndex] = my_element;
	return (1);
}
