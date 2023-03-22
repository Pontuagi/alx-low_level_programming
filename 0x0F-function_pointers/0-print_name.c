#include "function_pointers.h"

/**
  * print_name - print a name
  * @name: name to print
  * @f: pointer funtion
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
