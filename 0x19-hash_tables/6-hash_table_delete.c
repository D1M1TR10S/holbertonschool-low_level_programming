#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: hash table to be deleted
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp1;
	hash_node_t *temp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp1 = ht->array[i];
		while (temp1 != NULL)
		{
			temp2 = temp1->next;
			free(temp1->value);
			free(temp1->key);
			free(temp1);
			temp1 = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
