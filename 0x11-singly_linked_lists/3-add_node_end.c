#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node to the end of linked list
 * @head: Beginning of linked list
 * @str: string being held in each node
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node;
	list_t *last = *head;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
