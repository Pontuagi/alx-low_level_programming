#include "lists.h"

/**
  * get_nodeint_at_index- get a node a nth index of a listint_t list
  * @head: pointer to head of list
  * @index: nth index to get node
  *
  * Return: nth node or NULL if it does not exist.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *index_node;

	while (head != NULL)
	{
		count++;
		if (count == index)
			index_node = head;
		head = head->next;
	}
	if (count < index)
		return (NULL);

	return (index_node);
}
