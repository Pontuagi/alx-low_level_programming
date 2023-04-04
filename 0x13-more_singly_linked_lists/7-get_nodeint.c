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
	listint_t *index_node = head;

	if (head == NULL)
		return (NULL);
	while (index_node != NULL)
	{
		if (count == index)
			return (index_node);
		count++;
		index_node = index_node->next;
	}

	return (NULL);
}
