#include "main.h"
#include <stdio.h>

/**
  * read_textfile - read a textfile and print it to the POSIX stdout
  * @filename: pointer to file
  * @letters: number of letters in textfile
  *
  * Return: number of letters printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer0;
	ssize_t no_of_bytes, bytes_written;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer0 = (char *)malloc(sizeof(char) * (letters + 1));
	no_of_bytes = fread(buffer0, sizeof(char), letters, file);

	if (no_of_bytes <= 0)
	{
		fclose(file);
		free(buffer0);
		return (0);
	}

	buffer0[no_of_bytes] = '\0';
	bytes_written = fwrite(buffer0, sizeof(char), no_of_bytes, stdout);
	fclose(file);

	if (bytes_written != no_of_bytes)
	{
		return (0);
		free(buffer0);
		return (0);
	}

	free(buffer0);
	return (bytes_written);
}
