#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table of size (size)
 * @size: defines the size of the table
 * Return: a pointer to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	table->size = size;

	table->array = malloc(sizeof(hash_node_t) * size);

	if (table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
