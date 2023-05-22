#include <string.h>
#include "main.h"

/**
  * _strcat - function to append a string to another string
  * @dest: destination string
  * @src: source string
  * Return: result of appending the string src to dest
  */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
