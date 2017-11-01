#include "lists.h"
/**
 * sum_listint - Return the sum of all values held
 * @head: Pointer to first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
