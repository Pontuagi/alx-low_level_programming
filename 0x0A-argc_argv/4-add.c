#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - main function
  * @argc: arguments count
  * @argv: argument index
  * Return: 0 if successfull else 1
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) % 10) > 0 && (atoi(argv[i]) % 10) < 10)
		{
		sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
