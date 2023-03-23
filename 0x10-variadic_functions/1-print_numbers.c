#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
  * print_numbers - print numbers in a function
  * @separator: string separator for numbers
  * @n: number of arguments
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnt;
	unsigned int i;

	va_start(pnt, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(pnt, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pnt);
}
