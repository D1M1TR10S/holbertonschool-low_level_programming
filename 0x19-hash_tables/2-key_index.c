#include "hash_tables.h"
/**
 * key_index - Finds the index of a key
 * @key: Name of the key
 * @size: Size of the array being indexed
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
