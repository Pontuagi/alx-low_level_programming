#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - concanate two strings
  * @s1: string 1
  * @s2: string 2
  * @n: how much of str2 to copy
  *
  * Return: Pointer.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	int no = strlen(s1) + n;

	st = malloc(sizeof(char) * no);
	if (st != NULL)
	{
		strcat(st, s1);
		strncat(st, s2, n);
	}
	return (st);
}
