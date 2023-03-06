#include "main.h"
#include "string.h"

/**
  * memset - fills memory with the constant byte b
  * @s: pointer to memory area
  * @b: constant byte
  * @n: number of bytes in memory to fill
  * Return: return s
  */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
