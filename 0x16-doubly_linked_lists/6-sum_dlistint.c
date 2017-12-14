#include "lists.h"
/**
 * sum_dlistint - Return the sum of values stored in all nodes
 * @head: pointer to the first node
 * Return: Sum of all Nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
