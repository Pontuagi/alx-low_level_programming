#include "main.h"
#include <ctype.h>

/**
  * string_toupper - convert all small letters to uppercase.
  * @s: string to check
  * Return: char
  */

char *string_toupper(char *s)
{
	char t;

	t = toupper(s);
	return (t);
}
