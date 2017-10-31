#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Print the length of the linked list
 * @h: Pointer to head of the list
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
