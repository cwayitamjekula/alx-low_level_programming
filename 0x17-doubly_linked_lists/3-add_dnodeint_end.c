#include "lists.h"

/**
 * add_dnodeint_end - Adding a node at the end of a linked list
 * @head: A double pointer to the head of the list
 * @n: An integer
 * Return: NULL if failure or head of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
	return (*head);
}
