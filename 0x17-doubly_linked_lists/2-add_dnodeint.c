#include "lists.h"

/**
  * add_dnodeint - add node at the begining of a list
  * @head: pointer to head of the list
  * @n: data for the new node
  *
  * Return: pointer to the new node.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;
	dlistint_t *temp;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->prev = NULL;
	if (*head == NULL)
	{
		*head = new_head;
		new_head->next = NULL;

		return (new_head);
	}
	temp = *head;
	new_head->next = temp;
	*head = new_head;
	temp->prev = new_head;

	return (new_head);
}
