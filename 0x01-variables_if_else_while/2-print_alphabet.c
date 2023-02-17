#include <stdio.h>

/**
  *main - our main function
  *Description: print lowercase letters
  *Return: return 0
  */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
