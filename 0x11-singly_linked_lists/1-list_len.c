#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Return length of the linked list 
 * @*h: Pointer to first node
 * Return: elements.
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
