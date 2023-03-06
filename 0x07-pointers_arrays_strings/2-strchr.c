#include "main.h"
#include <string.h>

/**
  * _strchr - locate a character in a string
  * @s: string
  * @c: character
  * Return: return s
  */

char *_strchr(char *s, char c)
{
	char *i;

	i = strchr(s, c);
	return (i);
}
