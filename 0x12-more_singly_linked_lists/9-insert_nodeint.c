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
	listint_t *left;
	unsigned int index;
	listint_t *new_node;
	listint_t *new_head = *head;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (index = 0; new_head != NULL && index != idx; index++)
	{
		if (index + 1 == idx)
			left = new_head;
		new_head = new_head->next;
	}
	new_node->next = new_head;
	new_head = left;
	left->next = new_node;
	return (new_node);
}
