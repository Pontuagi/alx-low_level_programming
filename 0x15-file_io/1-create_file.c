#include "main.h"

/**
  * create_file - create a file
  * @filename: name of the file
  * @text_content: text to add to file
  *
  * Return: return 1 on success or -1
  */

int create_file(const char *filename, char *text_content)
{
	int fg;
	ssize_t write_bytes;
	ssize_t content_len;

	if (filename == NULL)
		return (-1);
	fg = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fg == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_len = strlen(text_content);
		write_bytes = write(fg, text_content, content_len);
		if (write_bytes == -1)
		{
			close(fg);
			return (-1);
		}
	}
	close(fg);

	return (1);
}
