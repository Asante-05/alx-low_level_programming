#include "hash_tables.h"
/**
 * free_list - function to free each node-
 * @head: pointer to head node in hash tab;e
 * Return: (void)
 */

void free_list(hash_node_t *head)
{
	hash_node_t *current = head;
	hash_node_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
/**
 * hash_table_delete - function to delete a hash table
 * @ht: pointer to the hash table
 * Return: (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;

	for (; index < ht->size; index++)
	{
		free_list(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
