#include "lists.h"

/**
  * sum_dlistint - sum of all data on doubly linked list
  * @head: pointer to head of a brick
  *
  * Return: total_sum of the data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int total_sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		total_sum += current->n;
		current = current->next;
	}

	return (total_sum);
}
