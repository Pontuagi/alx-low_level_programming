#include "main.h"
#include <ctype.h>
#include <string.h>

/**
  * cap_string - convert first letter of a word to uppercasse
  * @c: string
  * Return: return c
  */

char *cap_string(char *c)
{
	int i, l;

	l = strlen(c);
	for (i = 0; i < l; i++)
	{
		if (i == 0)
		{
			c[i] = toupper(c[i]);
		}
		else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n')
			c[i + 1] = toupper(c[i + 1]);
		else if (c[i] == '{' || c[i] == '}' || c[i] == '.')
			c[i + 1] = toupper(c[i + 1]);
		else if (c[i] == '?' || c[i] == '"' || c[i] == '(')
			c[i + 1] = toupper(c[i + 1]);
		else if (c[i] == ')' || c[i] == ',' || c[i] == ';')
			c[i + 1] = toupper(c[i + 1]);
		else if (c[i] == '!')
			c[i + 1] = toupper(c[i + 1]);
	}
	return (c);
}
