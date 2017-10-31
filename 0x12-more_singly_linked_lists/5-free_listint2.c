#include "lists.h"
/**
 * free_listint2 - Free listint_t with double pointer
 * @head: First node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
