#include "lists.h"
/**
 * dlistint_len - Return the number of elements in a linked list
 * @h: Head node of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);	
}
