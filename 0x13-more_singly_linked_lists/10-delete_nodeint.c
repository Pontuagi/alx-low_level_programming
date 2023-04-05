#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node a particular index in a linked list
  * @head: pointer to head ot linked list
  * @index: index to delete node
  *
  * Return: return 1 on succes or -1 on failure.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *index_node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	index_node = *head;
	for (; count < index - 1 && index_node != NULL; count++)
		index_node = index_node->next;
	if (index_node == NULL || index_node->next == NULL)
		return (-1);

	temp = index_node->next;
	index_node->next = temp->next;
	free(temp);

	return (1);
}
