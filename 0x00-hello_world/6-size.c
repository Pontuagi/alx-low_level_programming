#include <stdio.h>

/**
 * main - this is the main function for our program
 *description - print size of variables
 *return - return 0
 */

int main(void)
{
	int intype;
	char chartype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of a char: %zu bytes/n", sizeof(chartype));
	printf("Size of an int: %zu bytes/n", sizeof(inttype));
	printf("Size of a long int: %zu bytes/n", sizeof(longinttype));
	printf("Size of a long long int: %zu bytes/n", sizeof(longlonginttype));
	printf("Size of float: %zu bytes/n", sizeof(floattype));

	return (0);
}
