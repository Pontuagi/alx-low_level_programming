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
	unsigned int s1len = 0, s2len = 0;

	if (s1 != NULL)
		s1len = strlen(s1);
	else
		s1len = 0;
	if (s2 != NULL)
		s2len = strlen(s2);
	else
		s2len = 0;
	if (n >= s2len)
		n = s2len;
	st = malloc(sizeof(char) * (s1len + n + 1));

	if (st == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(st, s1);
	strncat(st, s2, n);
	return (st);
}
