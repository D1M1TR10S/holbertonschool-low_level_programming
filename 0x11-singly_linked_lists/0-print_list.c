#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print list of nodes and the length of each string
 * @h: Pointer to node
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
