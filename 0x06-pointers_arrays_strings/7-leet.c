#include "main.h"
#include <stdio.h>

void replace_char(char *s, char c, char d);
/**
  * leet - convert some letter to leet
  * @s: string
  * Return: return s
  */

char *leet(char *s)
{
	replace_char(s, 'a', '4');
	replace_char(s, 'A', '4');
	replace_char(s, 'e', '3');
	replace_char(s, 'E', '3');
	replace_char(s, 'O', '0');
	replace_char(s, 'o', '0');
	replace_char(s, 'T', '7');
	replace_char(s, 't', '4');
	replace_char(s, 'L', '1');
	replace_char(s, 'l', '1');
	printf("\n");
	return (s);
}

/**
  * replace_char - replace character in a string
  * @s: string
  * @c: character to be replaced
  * @d: character to replace with
  */

void replace_char(char *s, char c, char d)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
			s[i] = d;
	}
}
