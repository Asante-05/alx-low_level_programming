#include "hash_tables.h"
/**
 * hash_table_print - function to print a hash table
 * @ht: pointer to a hash table
 * Return: (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i, counter = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (counter > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			counter++;
		}

	}
	printf("}\n");

}
