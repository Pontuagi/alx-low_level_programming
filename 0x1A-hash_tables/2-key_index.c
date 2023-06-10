#include "hash_tables.h"

/**
 * key_index - function to find the index of a key
 * @key: the key whose index to find
 * @size: the size of the hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;

	return (i);
}
