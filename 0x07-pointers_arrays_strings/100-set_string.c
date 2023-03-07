#include "main.h"

/**
  * set_string - set the value of a pointer to a char
  * @s: the pointer to to char to b e hanged
  * @to: the char to change to
  */

void set_string(char **s, char *to)
{
	*s = to;
}
