#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * str_concat - concatenate 2 strings using malloc
  * @s1: string 1
  * @s2: string 2
  *
  * Return: ponter to concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	char *ps;
	int n = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	n = strlen(s1) + strlen(s2);
	ps = malloc((n + 1) * sizeof(char));

	if (ps != NULL)
	{
		ps = strcat(ps, s1);
		ps = strcat(ps, s2);
	}
	return (ps);
}
