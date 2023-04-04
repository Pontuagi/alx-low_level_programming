#include "lists.h"

/**
  * pop_listint - delete the head node
  * @head: pointer to the head of list
  *
  * Return: return th head node data n or 0 of there is no list
  */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *del;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		del = *head;
		n = del->n;
		*head = (*head)->next;
		free(del);
	}
	return (n);
}
