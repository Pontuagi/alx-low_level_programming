#include "lists.h"

/**
  * print_listint_safe - print contents of a linked list
  * @head: pointer to the head of the list
  *
  * Return: return count of nodes.
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *sin = head, *two = head;

	while (two != NULL && two->next != NULL)
	{
		printf("[0x%p] %d\n", (void *)sin, sin->n);
		count++;
		sin = sin->next;
		two = two->next->next;

		if (sin == two)
		{
			printf("[0x%p] %d\n", (void *)sin, sin->n);
			count++;
			exit(98);
		}
	}

	if (two != NULL)
	{
		printf("[0x%p] %d\n", (void *)two, two->n);
		count++;
	}

	return (count);
}
