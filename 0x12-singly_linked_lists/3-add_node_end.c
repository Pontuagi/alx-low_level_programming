#include "lists.h"

/**
  * add_node_end - add node at the end of linked list
  * @head: pointer to head of linkedlist
  * @str: pointer to new string
  *
  * Return: pointer to new node or NULL if unsuccessful.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	char *new_str;

	if (head == NULL || str == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
