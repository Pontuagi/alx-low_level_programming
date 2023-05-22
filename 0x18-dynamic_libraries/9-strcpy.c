#include "main.h"
#include <string.h>

/**
  * _strcpy - copy a string from one pointer to anothe
  * @dest: destination
  * @src: source
  * Return: return destination pointer
  */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
