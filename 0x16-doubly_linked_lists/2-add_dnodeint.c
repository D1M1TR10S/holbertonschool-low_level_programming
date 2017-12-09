#include "lists.h"
/**
 * add_dnodeint - Add a node at the front of a list
 * @*head: Pointer to first node
 * @n: Value in node being added to list
 * Return: Address of newNode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;
	return (*head);
}
