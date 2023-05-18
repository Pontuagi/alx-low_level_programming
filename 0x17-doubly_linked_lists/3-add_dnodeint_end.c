#include "lists.h"

/**
  * add_dnodeint_end - add node at end of list
  * @head: head pointer of the list
  * @n: last_node data
  *
  * Return: pointer to last_node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *current;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		last_node->prev = NULL;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = last_node;
		last_node->prev = current;
	}

	return (last_node);
}
