#include <stdio.h>

/**
  * main - main function
  * description: print combination of digits commas and spaces
  * Return: return 0
  */

int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
	{
		putchar(no);
		putchar(',');
		putchat(' ');
	}
	return (0);
}
