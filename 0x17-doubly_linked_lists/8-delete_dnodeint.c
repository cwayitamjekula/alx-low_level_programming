#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at a given index
 * @head: A pointer to pointer to the head of the linked list
 * @index: position at which the node would be expunged
 * Return: 1 if successful otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		return (-1);
	}
	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
