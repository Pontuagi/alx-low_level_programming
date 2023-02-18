#include <stdio.h>

/**
  * main - main function
  *Description: combine 3 numbers and print the least combinations
  *Return: 0
  */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10 ; k++)
			{
				if (100 * i + 10 * j + k < 100 * k + 10 * i + j && 100 * j + 10 * i + k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (100 * i + 10 * j + k != 789)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
putchar('\n');
return (0);
}
