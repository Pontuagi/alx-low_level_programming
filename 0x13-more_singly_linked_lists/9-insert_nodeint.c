#include "lists.h"

/**
  * insert_nodeint_at_index - insert a node a index idx in a linked list
  * @head: pointer to head of list
  * @idx: Index to add new node
  * @n: data to add to node
  *
  * Return: return pointer to new node or NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if (idx == 0 || *head == NULL)
	{
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	temp = *head;
	for (; count < idx - 1 && temp != NULL; count++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
