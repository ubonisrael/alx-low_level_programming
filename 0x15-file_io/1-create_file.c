#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to be written to the file
 * Return: 1 0n succes, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;;

	if (filename == NULL)
		return (-1);
	umask(0000);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
