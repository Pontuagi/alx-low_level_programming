#include <stdio.h>

/**
  * main - main function
  * description: print combination of digits commas and spaces
  * Return: return 0
  */

int main(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		putchar(no + '0');
		if (no != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
