#include "lists.h"

/**
  * sum_listint - sum all the data in listint_t linked list
  * @head: pointer to head of linked list
  *
  * Return: return sum or 0 if list is empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
