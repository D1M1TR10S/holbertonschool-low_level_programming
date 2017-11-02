#include "lists.h"
/**
 * delete_nodeint_at_index - Delete node at index given
 * @head: First node
 * @index: Index of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *right;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	while (i + 1 < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	right = current->next;
	current->next = right->next;
	free(right);
	return (1);
}
