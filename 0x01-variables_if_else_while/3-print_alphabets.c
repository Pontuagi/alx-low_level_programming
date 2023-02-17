#include <stdio.h>

/*
 * main - the main function of the program
 * Description: print alphabet in lowercase and uppercase
 * Return: return 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
