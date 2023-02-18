#include <stdio.h>

/**
  * main - main function
  * description: print combination of digits commas and spaces
  * Return: return 0
  */

int main(void)
{
	int no;

	for (no = 0; no < 9; no++)
	{
		putchar(no + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');
	return (0);
}
