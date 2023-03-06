#include "main.h"
#include <string.h>

/**
  * strstr - locate a substring
  * @haystack: string
  * @needle : substring
  * Return: return t - pointer to substring
  */

char *_strstr(char *haystack, char *needle)
{
	char *t;

	t = strstr(haystack, needle);
	return (t);
}
