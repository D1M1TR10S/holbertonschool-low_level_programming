#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at given index
 * @head: Pointer to head node
 * @index: Index of node to be deleted
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		(*head) = current;
		(*head)->prev = NULL;
		return (1);
	}
	while (index - 1)
	{
		--index;
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	if (current->next != NULL)
	{
		temp = current;
		current = current->next;
		current->prev = temp;
	}
	return (1);
}
