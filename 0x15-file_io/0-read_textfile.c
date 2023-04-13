#include "main.h"

/**
  * read_textfile - read a textfile and print it to the POSIX stdout
  * @filename: pointer to file
  * @letters: number of letters in textfile
  *
  * Return: number of letters printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int readx, writex;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	readx = fread(buffer, 1, letters, fp);
	if (readx == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	writex = write(STDOUT_FILENO, buffer, readx);
	if (writex == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	free(buffer);
	fclose(fp);

	return (readx);
}
