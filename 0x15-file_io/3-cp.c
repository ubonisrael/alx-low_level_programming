#include "main.h"

/**
 * err_read - prints error message when read fails & terminates program
 * @fn: name of file
 * Return: void
 */

void err_read(const char *fn)
{
	dprintf(2, "Error: Can't read from file %s\n", fn);
	exit(98);
}

/**
 * err_write - prints error message when write fails & terminates program
 * @fn: name of file
 * Return: void
 */

void err_write(const char *fn)
{
	dprintf(2, "Error: Can't write to file %s\n", fn);
	exit(99);
}

/**
 * err_close - prints error message when close fails & terminates program
 * @fd: file descriptor
 * Return: void
 */

void err_close(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the contents of a file to another file
 * @ac: number of command line arguments passed
 * @av: array of command line arguments
 * Return: 1
 */

int main(int ac, char *av[])
{
	char *buf;
	char *usage = "Usage: cp file_from file_to\n";
	int fd1, fd2, wr, sz;

	if (ac != 3)
	{
		write(STDERR_FILENO, usage, strlen(usage));
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	umask(0000);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
		err_read(av[1]);
	if (fd2 == -1)
		err_write(av[2]);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		err_write(av[2]);
	do {
		sz = read(fd1, buf, 1024);
		if (sz == -1)
			err_read(av[1]);
		wr = write(fd2, buf, sz);
		if (wr == -1)
			err_write(av[2]);
	} while (sz != 0);
	if (close(fd1) == -1)
		err_close(fd1);
	if (close(fd2) == -1)
		err_close(fd2);
	free(buf);
	return (1);
}
