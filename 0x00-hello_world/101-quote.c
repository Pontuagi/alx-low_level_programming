#include <stdio.h>
#include <unistd.h>

/**
  * main - prints a string
  * Return: Returns 1
  */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 57);
	return (0);
}
