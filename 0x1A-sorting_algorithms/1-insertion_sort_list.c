#include "sort.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	listint_t *hold;
	listint_t *start = *list;

	while (start != NULL)
	{
		if (start->prev != NULL)
		{
			temp = start;
			if (temp->n < temp->prev->n)
			{
				hold = temp;
				start = hold->prev;
				start->next = hold->next;
				start = start->next;
				start->prev = hold->prev;
				while (temp != NULL)
				{
					if (temp->prev->n < hold->n || temp->prev == NULL)
						break;
					temp = temp->prev;
					hold->prev = temp->prev;
					hold->next = temp;
					temp->prev = hold;
					temp = hold->prev;
					temp->next = hold;
					print_list(*list);
				}
			}
		}
		start = start->next;
	}
}
