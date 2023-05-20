#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of a linked list
 * @head: A pointer to the head of a linked list
 * @index: index at which the node should be taken
 * Return: node at index of the linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	i = 0;
	while (node != NULL)
	{
		if (i == index)
		{
			return (node);
		}
		i++;
		node = node->next;
	}
	return (node);
}
