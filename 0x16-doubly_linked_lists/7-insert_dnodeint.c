#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at the index
 * @h: Pointer to head of linked list
 * @idx: Index of where new node is to be placed
 * @n: Value to be stored inside of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;

	if (h == NULL)
		return (NULL);
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		(*h) = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx - 1)
	{
		--idx;
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	if (temp->next->next != NULL)
	{
		temp = temp->next->next;
		temp->prev = new_node;
	}
	return (new_node);
}
