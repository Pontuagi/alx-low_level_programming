#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - add node at the head
  * @head: pointer to head of linked list
  * @str: string to be added to new node
  *
  * Return: address of new element or NULL of it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
