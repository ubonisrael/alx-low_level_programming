#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to be appended to the file
 * Return: 1 0n success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
