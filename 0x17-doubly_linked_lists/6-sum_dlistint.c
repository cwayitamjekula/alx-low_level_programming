#include "lists.h"
/**
 * sum_dlistint - function that sums of all the data of a linked list
 * @head: A pointer to the head of a linked list
 * Return: sum of the all data of a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
