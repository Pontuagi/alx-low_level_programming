#include "main.h"
#include <string.h>

/**
  * _strcmp - compare two strings
  * @s1: string 1
  * @s2: string 2
  * Return: 1 if same and 0 if different
  */

int _strcmp(char *s1, char *s2)
{
	int i;
/**
  *int c = 0;

*	if (strlen(s1) == strlen(s2))
*	{
*		for (i = 0; s2[i] != '\0'; i++)
*		{
*			if (s1[i] == s2[i])
*				c++;
*		}
*		if (c == i)
*			return (1);
*	}
*	return (0);
*/
	i = strcmp(s1, s2);
	return (i);
}
