#include "lists.h"

/**
  * print_listint_safe - print contents of a linked list
  * @head: pointer to the head of the list
  *
  * Return: return count of nodes.
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, loop = 0;
	const listint_t *sin = head, *two = head;

	while (two && two->next)
	{
		sin = sin->next;
		two = two->next->next;
		count++;

		if (sin == two)
		{
			loop = 1;
			break;
		}
	}
	if (loop)
	{
		sin = head;

		while (sin != two)
		{
		printf("0x[%p] %d\n", (void *)sin, sin->n);
		sin = sin->next;
		two = two->next;
		}
		printf("0x[%p} %d\n", (void *)sin, sin->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
