#include "lists.h"

/**
  * reverse_listint - reverse the elements of a linked list
  * @head: pointer to the head of the linked list
  *
  * Return: return reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *rev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;

	return (rev);
}
