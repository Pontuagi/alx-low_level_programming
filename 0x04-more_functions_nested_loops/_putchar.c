#include <stdio.h>
#include "main.h"

/**
  * _putchar -writes the character c to stdout
  *@c: The character to print
  * Return: on Success 1
  *On error, -1 is returned
  */

int _putchar(char c)
{
	putchar(c);
	return (write (1, &c, 1));
}
