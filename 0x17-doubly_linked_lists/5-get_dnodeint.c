#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of a linked list
 * @head: A pointer to head of the linked list
 * @n: A constant integer
 * Return: new node or Null if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	node->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
