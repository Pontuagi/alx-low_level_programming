#include "3-calc.h"
#include <string.h>

/**
  * get_op_func - get the right functon for operation
  * @s: operator
  *
  * Return: return pointer to function
  */

int (*get_op_func(char *s))(int, int)
{
	int (*op_func)(int, int) = NULL;

	if (*s == '+')
		op_func = op_add;
	else if (*s == '-')
		op_func = op_sub;
	else if (*s == '/')
		op_func = op_div;
	else if (*s == '%')
		op_func = op_mod;
	else if (*s == '*')
		op_func = op_mul;

	return (op_func);

}
