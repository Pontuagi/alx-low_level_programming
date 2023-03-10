#include <stdio.h>
#include <stdlib.h>

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
		if (atoi(argv[i]) > 0)
		{
		sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
