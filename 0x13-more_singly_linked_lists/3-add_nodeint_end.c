#include "lists.h"

/**
  * add_nodeint_end - and element at the tail of linked list
  * @head: pointer to head of list
  * @n: data to add to end of list
  *
  * Return: return pointer to last element or NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *lastnode;

	newnode->n = n;
	newnode->next = NULL;

	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		lastnode = *head;

		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	return (newnode);
}
