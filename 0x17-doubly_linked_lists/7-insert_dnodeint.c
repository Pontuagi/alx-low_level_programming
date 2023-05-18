#include "lists.h"

/**
  * insert_dnodeint_at_index - insert a node at a particular index
  * @h: head pointer of the list
  * @idx: index to add node
  * @n: data for the new_node
  *
  * Return: return pointer to new_node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}
	if (count != idx)
	{
		free(new_node);
		return (NULL);
	}
	if (current != NULL)
		current->prev->next = new_node;
	new_node->prev = current->prev;
	new_node->next = current;
	current->prev = new_node;

	return (new_node);
}
