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
		sum = sum + atoi(argv[i]);
		if (isdigit(atoi(argv[i])) != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
