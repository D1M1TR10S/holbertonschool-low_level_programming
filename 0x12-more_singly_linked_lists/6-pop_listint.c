#include "lists.h"
/**
 * pop_listint - Return value of head, delete it, make next node new head
 * @head: First node
 * Return: num
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	num = temp->n;
	*head = temp->next;
	free(temp);

	return (num);
}
