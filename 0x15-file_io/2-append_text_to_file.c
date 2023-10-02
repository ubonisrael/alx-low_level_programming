#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to be appended to the file
 * Return: 1 0n success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(fd, text_content, len);
		if (wr < 0 || wr < len)
			return (-1);
	}
	return (1);
}
