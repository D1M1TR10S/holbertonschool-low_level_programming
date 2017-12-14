#include "lists.h"
/**
 * is_palindrome - Check to see if a linked list is a palindrome
 * @head: Pointer to first node
 * Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *first = (*head);
	listint_t *link1;
	listint_t *link2;
	unsigned int i = 1;
	unsigned int inc = 1;
	
	if (head == NULL)
		return (NULL);

	while (first != NULL)
	{
		first = first->next;
		i++;
	}
	first = (*head);
	link1 = (*head);
	link2 = (*head);
	i = i / 2;
	while (link2 != NULL)
	{
		link2 = link2->next;
		if (inc == i)
		{
			first = link2;
			link1 = link2->next;
		}
		inc++;
	}
	first->next = link2;
	first = link2;
	link2->next = link1;
	while (link2 != link1)
		link2 = link2->next;
	first->next = link2;
	first = link2;
	link1->next = link2
	
}
