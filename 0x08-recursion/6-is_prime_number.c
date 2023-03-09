#include "main.h"

/**
  * is_prime_number - checks for prime numbers
  * @n: number
  * Return: return 1 if prime number else 0
  */

int is_prime_number(int n)
{
	int x = n / 2;

	while (x > 0)
	{
		if (n % x != 0)
		{
			return (0);
		}
		else if (x == 1)
		{
			return (1);
		}
		else
		{
			x--;
			is_prime_number(n);
		}
	}
	return (1);
}
