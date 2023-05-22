#include "main.h"
#include <string.h>

/**
  * _strspn - get length of a prefix substring
  * @s: string
  * @accept: bytes to check from
  * Return: length n
  */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = strspn(s, accept);
	return (n);
}
