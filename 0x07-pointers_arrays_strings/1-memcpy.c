#include "main.h"
#include <string.h>

/**
  * memcpy - copies memory area
  * @src: source memory area
  * @dest: destination memory area
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
