#include "lists.h"
/**
 * pop_listint - Return value of head, delete it, make next node new head
 * @head: First node
 * Return: num
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (num);
}
