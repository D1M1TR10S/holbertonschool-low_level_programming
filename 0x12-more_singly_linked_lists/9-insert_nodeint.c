#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at the index received
 * @head: Pointer to first node
 * @idx: Index where node is to be inserted
 * @n: Value at new_node
 * Return: Address of new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (*head);
	}
	while (idx - 1)
	{
		--idx;
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
