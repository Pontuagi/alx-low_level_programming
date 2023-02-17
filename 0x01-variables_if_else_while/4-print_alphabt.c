#include <stdio.h>

/**
  *main - main function
  *Description: print lowercase alphabet except q and e
  *Return: return 0
  */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
