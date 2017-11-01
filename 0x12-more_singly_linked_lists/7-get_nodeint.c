#include "lists.h"
/**
 * get_nodeint_at_index - Return node at index
 * @head: First node
 * @index: Node to be returned
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *val;
	listint_t *new_node = head;

	if (head == NULL)
		return (NULL);

	while (new_node != NULL)
	{
		i++;
		new_node = new_node->next;
		if (i == index)
		{
			val = new_node;
			return (val);
		}
	}
	return (NULL);
}
