#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a node to a linked list
 * @head: Beginning of linked list
 * @str: The string within each node
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = (*head);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->str = strdup(str);

	(*head) = new_node;
	return (*head);
}
