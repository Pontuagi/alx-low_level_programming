#include "main.h"

/**
  * _putchar - print a character to STDOUT
  * @c: character to print
  */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
