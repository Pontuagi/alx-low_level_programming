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
	dlistint_t *current, *temp, *new_node;
	size_t count = 0;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			new_node->next = NULL;
			new_node->prev = NULL;
			*h = new_node;
			return (new_node);
		}
		return (NULL);
	}
	current = *h;
	while (current != NULL && count != idx)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = current->prev;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = current;
	current->prev = new_node;

	return (new_node);
}
