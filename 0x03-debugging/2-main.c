#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int larget;

	a = 972;
	b = -98;
	c = 0;

	larget = largest_number(a, b, c);
	printf("%d is the largest number\n", larget);
	return (0);
}
