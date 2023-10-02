#include "main.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX standard output.
 * @filename: text file to be read
 * @letters: number of characters to be read
 * Return: if successful, number of characters read, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, wr;
	char *text = malloc(sizeof(char) * letters);

	if (filename == NULL || text == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sz = read(fd, text, letters);
	if (sz == -1 )
		return (0);
	wr = write(STDOUT_FILENO, text, sz);
	if (wr == -1 || wr != sz)
		return (0);
	free(text);
	close(file);
	return (wr);
}
