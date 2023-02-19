#include <stdio.h>
#include <unistd.h>

/**
  * main - prints a string
  * Return: Returns 1
  */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 62, 1, stderr);
	return (1);
}
