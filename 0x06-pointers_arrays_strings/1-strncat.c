#include "main.h"
#include <string.h>

/**
  * _strncat - concatenate strings src to dest
  * @dest: destination string
  * @src: source string
  * @n: max number of bytes from src
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
