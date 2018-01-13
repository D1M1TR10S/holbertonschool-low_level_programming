#include "hash_tables.h"
/**
 * hash_table_set - Create a new node and add to the hash table
 * @ht: Hash table being added to
 * @key: Key of new node
 * @value: Value held by key
 * Return: 1 on success and 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *tmp;
	unsigned long int index;

	if (key == NULL || ht == NULL || *key == '\0')
		return (0);
	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, strdup(key)) == 0)
		{
			tmp->value = strdup(value);
			free(new_node);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
