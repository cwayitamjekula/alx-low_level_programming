#include "lists.h"
/**
 * insert_dnodeint_at_index - inserting a node at a given position in a list
 * @h: A double pointer to head of the linked list
 * @idx: position at which node would be inserted
 * @n: integer that holds data
 * Return: list with node inserted or NUll
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	if (*h == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current_node = *h;
	i = 0;
	while (i < (idx - 1) && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	if (i == (idx - 1) && current_node != NULL)
	{
		new_node->prev = current_node;
		new_node->next = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = new_node;
		current_node->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
