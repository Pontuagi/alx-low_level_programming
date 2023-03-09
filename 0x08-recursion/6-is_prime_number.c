#include "main.h"

/**
  * is_prime_number - checks for prime numbers
  * @n: number
  * Return: return 1 if prime number else 0
  */

int is_prime_number(int n)
{
	int x = 2;

		if (n == 0 || n == 1)
		{
			return (0);
		}
		if (x == n)
		{
			return (1);
		}
		if (n % x == 0)
		{
			return (0);
		}
		x++;
		return (is_prime_number(n));
}
