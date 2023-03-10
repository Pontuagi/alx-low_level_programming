#include <stdio.h>
#include <stdlib.h>

/**
  * main - main function
  * @argc: argument count
  * @argv: argument index
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	int m = atoi(argv[1]);
	int n = 0;

	if (argc == 2)
	{
		if (m / 25 > 0)
		{
			n = n + (m / 25);
			m = m % 25;
		}
		if (m / 10 > 0)
		{
			n = n + (m / 10);
			m = m % 10;
		}
		if (m / 5 > 0)
		{
			n = n + (m / 5);
			m = m % 5;
		}
		if (m / 2 > 0)
		{
			n = n + (m / 2);
		}
		n = n + (m % 2);
		if (m < 0)
		{
			printf("0\n");
		}
		printf("%d\n", n);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

