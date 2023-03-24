#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - print all types of texts
  * @format: format of the text
  */

void print_all(const char * const format, ...)
{
	int i;
	va_list pnt;

	va_start(pnt, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				{
					printf("%c", va_arg(pnt, int));
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(pnt, int));
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(pnt, double));
					break;
				}
			case 's':
				{
					char *st = va_arg(pnt, char *);

					printf("%s", st);
					if (st == NULL)
						printf("(nil)");
					break;
				}
			default:
					break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] ==
					'i' || format[i] == 'f' || format[i] ==
					's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(pnt);
}
