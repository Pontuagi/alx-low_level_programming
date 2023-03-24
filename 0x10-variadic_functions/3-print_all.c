#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - print all types of texts
  * @format: format of the text
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list pnt;
	char *space = "";
	char *st;

	va_start(pnt, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(pnt, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(pnt, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(pnt, double));
				break;
			case 's':
				st = va_arg(pnt, char *);

				printf("%s%s", space, st);
				if (!st)
					printf("%s(nil)", space);
				break;
			default:
				i++;
				continue;
		}
		space = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(pnt);
}
