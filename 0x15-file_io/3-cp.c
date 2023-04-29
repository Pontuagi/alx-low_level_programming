#include "main.h"

#define BUFFER_SIZE 1024

/**
  * print_error - print error message on the POSIX standard error and exit
  * @text: the message to output.
  * @name: name of the file
  * @number: exit code.
  */

void print_error(char *text, char *name, int number)
{
	if (name == NULL)
		dprintf(STDERR_FILENO, "%s\n", text);
	dprintf(STDERR_FILENO, "%s%s\n", text, name);
	exit(number);
}

/**
  * main - program to copy content from one file to another
  * @files: number of arguments
  * @v: pointer to arguments
  *
  * Return: return 0 if successful.
  */

int main(int files, char *v[])
{
	int fa_from, fb_to;
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;
	ssize_t fa_read, fb_write;

	if (files != 3)
		print_error("Usage: cp file_from file_to", NULL, 97);

	/* open fa_from */
	file_from = v[1];
	file_to = v[2];
	fa_from = open(file_from, O_RDONLY);
	if (fa_from == -1)
		print_error("Error: Can't read from file", v[1], 98);

	/* open fa_to */
	fb_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (fb_to == -1)
		print_error("Error: Can't write to", v[2], 99);

	/* read from file fa_from and write to file fb_to */
	while ((fa_read = read(fa_from, buffer, BUFFER_SIZE)) > 0)
	{
		fb_write = write(fb_to, buffer, fa_read);
		if (fb_write == -1)
			print_error("Error: Can't write to", v[2], 99);
	}

	if (fa_read == -1)
		print_error("Error: Can't read from file", v[1], 98);
	if (close(fa_from) == -1)
		print_error("Error: Can't close fd FD_VALUE", NULL, 100);
	if (close(fb_to) == -1)
		print_error("Error: Can't close fd FD_VALUE", NULL, 100);

	return (0);
}
