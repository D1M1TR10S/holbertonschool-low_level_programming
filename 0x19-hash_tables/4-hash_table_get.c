#include "hash_tables.h"
/**
 * hash_table_get - Retrieve value associated with a key
 * @ht: Hash table being searched
 * @key: Key being searched for
 * Return: Value at key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (ht->array[index] != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
