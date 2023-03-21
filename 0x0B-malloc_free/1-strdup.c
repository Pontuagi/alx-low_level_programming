#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - return a string like str
  * @str: string to copy
  *
  * Return: return pointer to string
  */

char *_strdup(char *str)
{
	char *bs;
	int n = strlen(str);

	if (str == NULL)
		return (NULL);

	bs = malloc(sizeof(char) * (n + 1));
	if (bs == NULL)
		return (NULL);
	strcpy(bs, str);
	return (bs);
}
