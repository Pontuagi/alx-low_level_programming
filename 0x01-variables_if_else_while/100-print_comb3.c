#include <stdio.h>

/**
  * main- main function
  *Description: print possible combination of two single digit, outputting the
  *smallest combinetion of the two digits with comas and spaces
  *Return: 0
  */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (10 * i + j < 10 * j + i)
			{
				if (10 * i + j != 89)
				{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
