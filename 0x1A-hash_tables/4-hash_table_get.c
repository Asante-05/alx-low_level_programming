#include "hash_tables.h"
/**
 * hash_table_get - function to get the value of a key
 * @ht: pointer to a hash table
 * @key: key to be used to find the value
 * Return: pointer to buffer holding value on success, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);

}
