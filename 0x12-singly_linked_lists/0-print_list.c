#include "lists.h"
#include <stdio.h>

/**
  * print_list - print all elements of a list_t list
  * @h: head of node.
  *
  * Return: return count.
  */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *hat = h;

	while (hat != NULL)
	{
		if (hat->str != NULL)
		{
			printf("[%u] %s\n", hat->len, hat->str);
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
		}
		hat = hat->next;
	}
	return (count);
}
