#include "main.h"
#include <string.h>

/**
  * _memcpy - copies memory area
  * @src: source memory area
  * @dest: destination memory area
  * @n: number of bytes
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
