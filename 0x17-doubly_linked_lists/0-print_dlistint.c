#include "lists.h"

/**
  * print_dlistint - Print the elements of doubly linked list
  * @h: head pointer
  *
  * Return: return the node count
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
