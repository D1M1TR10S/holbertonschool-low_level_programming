#include "hash_tables.h"
/**
 * hash_table_print - Prints all the keys and values within a hash table
 * @ht: Pointer to hash table being printed
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int comma = 0;
	unsigned int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (comma == 1)
					printf(", ");
				printf("'%s':'%s'", temp->key, temp->value);
				comma = 1;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
