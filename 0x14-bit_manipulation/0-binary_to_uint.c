#include "main.h"

/**
  * binary_to_uint - convert binary to unsigned int
  * @b: Binary to convert
  *
  * Return: return unsigned int value of the binary
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int j, power = 0, len;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (j = len - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			val += (1 << power);
		else if (b[j] != '0')
			return (0);
		power++;
	}
	return (val);
}
