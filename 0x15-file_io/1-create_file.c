#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to be written to the file
 * Return: 1 0n succes, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_TRUNC | O_WRONLY);
	if (fd < 0)
	{
		fd = creat(filename, 0600);
		if (fd < 0)
			return (-1);
	}
	if (text_content != NULL)
	{
		wr = write(fd, text_content, len);
		if (wr < 0 || wr < len)
			return (-1);
	}
	return (1);
}
