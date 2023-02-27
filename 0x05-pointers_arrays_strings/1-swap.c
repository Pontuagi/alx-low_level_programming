#include "main.h"

/**
  * swap_int - function to swap the value of two numbers
  * @a: variable one
  * @b: variable two
  */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
