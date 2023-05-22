#include "main.h"
#include <string.h>

/**
  * _strpbrk - search a string for any set of bytes
  * @s: string
  * @accept: string containing bytes to search
  * Return: return t - pointer to matching byte
  */

char *_strpbrk(char *s, char *accept)
{
	char *t;

	t = strpbrk(s, accept);
	return (t);
}
