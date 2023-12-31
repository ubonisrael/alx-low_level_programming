#include "main.h"

/**
 * err_read - prints error message when read fails & terminates program
 * @fn: name of file
 * Return: void
 */

void err_read(const char *fn)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
	exit(98);
}

/**
 * err_write - prints error message when write fails & terminates program
 * @fn: name of file
 * Return: void
 */

void err_write(const char *fn)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn);
	exit(99);
}

/**
 * err_close - prints error message when close fails & terminates program
 * @fd: file descriptor
 * Return: void
 */

void err_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
	char buf[1024];
	char *usage = "Usage: cp file_from file_to\n";
	int fd1, fd2, wr, sz;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s", usage);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	umask(0000);
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fd1 == -1)
		err_read(av[1]);
	if (fd2 == -1)
		err_write(av[2]);
	while ((sz = read(fd1, buf, 1024)) != 0)
	{
		if (sz == -1)
			err_read(av[1]);
		wr = write(fd2, buf, sz);
		if (wr == -1)
			err_write(av[2]);
	}
	if (close(fd1) == -1)
		err_close(fd1);
	if (close(fd2) == -1)
		err_close(fd2);
	return (0);
}
