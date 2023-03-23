#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum all arguments in the function
  * @n: first arg
  *
  * Return: return sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pnt;

	va_start(pnt, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pnt, int);

	va_end(pnt);
	return (sum);
}
