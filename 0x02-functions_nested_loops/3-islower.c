#include "main.h"
#include <ctype.h>

/**
  * _islower - function to check if a letter is lowercase
  * @c: Check if c is lowercase or not
  *
  * Return: return 1 if c is lowercase otherwise 0
  */

int _islower(int c)
{
	int i;

	if (islower(c))
		i = 1;
	else
		i = 0;
	return (i);
}
