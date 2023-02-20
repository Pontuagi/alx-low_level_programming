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
				if (!(k == j || j == i || j > k || i > j))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(k == 9 || j == 8 || i == 7))
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
