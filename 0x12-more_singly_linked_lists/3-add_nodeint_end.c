#include "lists.h"
/**
 * add_nodeint_end - Add a new node to the end of a list
 * @head: First node coming in
 * @n: Value at the node
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t*) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
