#include <stdio.h>

/**
  * main - our main function
  * @argc: count of arguments
  * @argv: pointer to indexes of arguments
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
