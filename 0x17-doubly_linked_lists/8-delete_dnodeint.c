#include "lists.h"

/**
  * delete_dnodeint_at_index - delete a node at index
  * @head: list head pointer
  * @index: index to delete node
  *
  * Return: 1 if successfull else -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	while (current != NULL && count < index)
	{
		count++;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
	{
		temp = current->prev;
		temp->next = current->next;
	}
	else
	{
		*head = current->next;
	}
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
