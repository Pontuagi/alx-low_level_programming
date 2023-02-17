#include <stdio.h>

/**
  * main - main function
  *Description: print lowercase alphabet in reverse
  *Return: return (0)
  */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
