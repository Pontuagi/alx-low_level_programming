#include "lists.h"

/**
  * free_listint_safe - frees a listint_t list including loops
  * @h: pointer to head of list
  *
  * Return: numbers of nodes
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;
	size_t count;

	while (*h)
	{
		if ((*h)->next >= *h)
			break;

		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	*h = NULL;

	return (count);
}
