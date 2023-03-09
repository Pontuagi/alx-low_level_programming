#include "main.h"

/**
  * _sqrt_recursion - find the sqrt of a number using recursion
  * @n: number.
  * Return: return the square root
  */

int _sqrt_recursion(int n)
{
	int x = 1;

	while (x * x <= n)
	{
		if ((x * x) == n)
		{
			return (x);
		}
		else if (x * x < n)
		{
			x++;
			_sqrt_recursion(n);
		}
		else
		{
			x--;
			_sqrt_recursion(n);
		}
	}
	return x;
}
