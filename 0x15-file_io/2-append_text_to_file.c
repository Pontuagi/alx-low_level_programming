#include "main.h"

/**
  * append_text_to_file - append text to the end of a file
  * @filename: location of file
  * @text_content: content to append to a file
  *
  * Return: return 1 on success or -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	if (text_content != NULL)
	{
		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
