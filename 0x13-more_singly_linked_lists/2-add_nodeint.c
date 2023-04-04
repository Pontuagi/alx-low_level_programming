#include "lists.h"

/**
  * add_nodeint - add node at the head of singly linked list
  * @head: pointer to head of list
  * @n: data to add
  *
  * Return: new head pointer
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
