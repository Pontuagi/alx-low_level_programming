#include "lists.h"

/**
  * get_dnodeint_at_index - get node an index of list
  * @head: head pointer
  * @index: index to fetch node
  *
  * Return: node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL && count != index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
