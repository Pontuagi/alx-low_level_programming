#include "main.h"
#include <ctype.h>

/**
  * string_toupper - convert all small letters to uppercase.
  * @s: string to check
  * Return: char
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
