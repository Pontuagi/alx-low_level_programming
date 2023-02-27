#include "main.h"
#include <string.h>

/**
  * rev_string - reverse a string
  * @s: string to reverse
  */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	int mid = length / 2;
	char ch;

	for (i = 0; i < mid; i++)
	{
		ch = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = ch;
	}
}
