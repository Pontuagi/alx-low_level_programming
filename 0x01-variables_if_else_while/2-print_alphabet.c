#include <stdio.h>

/**
  *main - our main function
  *Description: print lowercase letters
  *Return: return 0
  */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}
