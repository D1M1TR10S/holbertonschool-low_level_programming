#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Print linked list. Only once if it loops. Exit if it fails.
 * @head: Pointer to first node
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *printer = (listint_t *)head;
	listint_t *compare;
	int printcount = 0;
	int compcount;

	if (head == NULL)
		exit(98);

	while (printer != NULL)
	{
		printf("[%p] %d\n", (void *)printer, printer->n);
		printer = printer->next;
		printcount++;
		compcount = 0;
		compare = (listint_t *)head;
		while (compcount < printcount)
		{
			if (compare == printer)
				return (printcount);
			compare = compare->next;
			compcount++;
		}
	}
	return (printcount);
}
