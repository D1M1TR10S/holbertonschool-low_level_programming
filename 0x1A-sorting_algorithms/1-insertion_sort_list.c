#include "sort.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *sort;

	if (list == NULL || *list == NULL)
		return;

	for (sort = (*list)->next; sort != NULL; )
	{
		temp = sort;
		if (sort->n < sort->prev->n)
		{
			while (temp->prev != NULL && temp->n < temp->prev->n)
			{
				/* Extracts the node */
				if (temp->next != NULL)
					temp->next->prev = temp->prev;
                        	temp->prev->next = temp->next;
				/* Moves node up one */
				temp->next = temp->prev;
				temp->prev = temp->prev->prev;
				/* Connects nodes around it */
				if (temp->prev != NULL)	
					temp->prev->next = temp;
				temp->next->prev = temp;
				if (temp->prev == NULL)
					/* set head node to temp */
					*list = temp;
				print_list(*list);
			}
		}
		sort = sort->next;
	}
}
