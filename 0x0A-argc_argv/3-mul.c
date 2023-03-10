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
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	return (0);
}
