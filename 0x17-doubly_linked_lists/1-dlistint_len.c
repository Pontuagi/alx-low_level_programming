#include "lists.h"

/**
  * dlistint_t - function to count the elements of a linked list
  * @h: head pointer
  *
  * Return: return count elements in the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;
	
	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
