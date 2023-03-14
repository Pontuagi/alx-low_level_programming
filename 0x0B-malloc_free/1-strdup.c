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

	bs = malloc(sizeof(str) * n);
	if (bs != NULL)
		strcpy(bs, str);

	return (bs);
}
