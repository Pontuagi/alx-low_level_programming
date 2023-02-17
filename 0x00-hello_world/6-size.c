#include <stdio.h>

/**
 *main - this is the main function of our program
 *description - print size of variables
 *Return: Return 0 is successful
 */

int main(void)
{
	int inttype;
	char chartype;
	long int longinttype;
	long long int long2inttype;
	float floattype;

	printf("Size of a char: %lu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %lu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long2inttype));
	printf("Size of a float: %lu byte(s)\n", sizeof(floattype));

	return (0);
}
