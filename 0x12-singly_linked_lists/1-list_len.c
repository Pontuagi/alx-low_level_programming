#include "lists.h"

/**
  * list_len - count the number of items in a linked list
  * @h: head pointer
  *
  * Return: return count
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tep = h;

	while (tep != 0)
	{
		count++;
		tep = tep->next;
	}
	return (count);
}
