#include "hash_tables.h"
/**
 * key_index - function to compute where a key value pains
 * goes in a hash table
 * @key: string key
 * @size: size of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	unsigned long int index = hash % size;

	return (index);

}
