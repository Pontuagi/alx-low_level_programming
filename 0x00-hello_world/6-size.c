#include <stdio.h>

/**
 *main - this is the main function of our program
 *description - print size of variables
 *return - return 0 is successful
 */

int main(void)
{
	int inttype;
	char chartype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of a char: %ld bytes\n", sizeof(chartype));
	printf("Size of an int: %ld bytes\n", sizeof(inttype));
	printf("Size of a long int: %ld bytes\n", sizeof(longinttype));
	printf("Size of a long long int: %ld bytes\n", sizeof(longlonginttype));
	printf("Size of float: %ld bytes\n", sizeof(floattype));

	return (0);
}
