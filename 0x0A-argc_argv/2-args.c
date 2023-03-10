#include <stdio.h>

/**
  * main - main function
  * @argc: argument count
  * @argv: argument index
  * Return: return 0 if successfull
  */

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

