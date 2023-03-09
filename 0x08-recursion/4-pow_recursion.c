#include "main.h"

/**
  * _pow_recursion - find the power of a number
  * @x: number
  * @y: power
  * Return: return power of x
  */

int _pow_recursion(int x, int y)
{
	int t = 1;

	if (y < 0)
		return (-1);
	if (y != 0)
		t = (x * _pow_recursion(x, y - 1));
	return (t);
}
