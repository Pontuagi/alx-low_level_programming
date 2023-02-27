#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * print_rev - print string in reverse
  * @s: string to print
  */

void print_rev(char *s)
{
	int length, i;
	char ch;

	length = strlen(s) - 1;
	for (i = 0; i < length / 2; i++)
	{
		ch = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = ch;
	}
	printf("%s\n", s);
}
