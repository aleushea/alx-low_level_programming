#include "hash_tables.h"

/**
 * hash_table_create - Function that creates my hush tabel
 * @size: size of array
 * Return: pointer to newly created my hush tabel
 * /

hash_table-t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	unsigned long int index;

	my_table = malloc(sizeof(hash_table_t));

	if (my_table == NULL)
		return (NULL);

	my_table->size = size;
	my_table->array = malloc(sizeof(hash_node_t *) *size);

	if(my_table->array == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		my_table->array[index] = NULL;
		index++;
	}
	return (my_table);
}
