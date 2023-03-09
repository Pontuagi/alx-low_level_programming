#include "main.h"

/**
  * _strlen_recursion - count length of string using recursion
  * @s: string
  * Return: return string count
  */

int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s == '\0')
	{
		return (t);
	}
	else
	{
		t++;
	}
	t += _strlen_recursion(s + 1);
	return (t);
}
