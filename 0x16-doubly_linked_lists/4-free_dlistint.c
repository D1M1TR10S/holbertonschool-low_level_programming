#include "lists.h"
/**
 * free_dlistint - Frees the linked list
 * @head: Pointer to the first node in linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
