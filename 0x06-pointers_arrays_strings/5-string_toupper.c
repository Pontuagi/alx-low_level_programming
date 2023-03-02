#include "main.h"

/**
  * string_toupper - convert all small letters to uppercase.
  * @s: string to check
  * Return: char
  */

char *string_toupper(char *s)
{
	int i = 0;

	for (; i != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
