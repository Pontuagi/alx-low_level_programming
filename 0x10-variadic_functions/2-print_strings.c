#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
  * print_strings - print a string
  * @separator: separator for strings
  * @n: number of strings
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pnt;
	unsigned int i;
	char *j;

	va_start(pnt, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			j = va_arg(pnt, char*);
			if (j == NULL)
				printf("nil");
			else
			{
				printf("%s", j);
				if (i != n - 1)
					printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(pnt);
}
