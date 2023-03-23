#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - main function
  * @argc: arguments
  * @argv: array of arguments
  * Return: 0 if successfull
  */

int main(int argc, char *argv[])
{
	int num1, num2, n;
	char op;

	op = *argv[1];
	num1 = atoi(argv[0]);
	num2 = atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (op != '+' || op != '-' || op != '*' || op != '/' || op != '%')
	{
		printf("Error\n");
		exit(100);
	}
	n = get_op_func(&op)(num1, num2);
	printf("%d\n", n);

	return (0);
}
