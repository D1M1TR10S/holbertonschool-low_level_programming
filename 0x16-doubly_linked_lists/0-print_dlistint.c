#include "lists.h"
/**
 * print_dlistint - Print the contents of a doubly linked list
 * dlistint_t *h
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
