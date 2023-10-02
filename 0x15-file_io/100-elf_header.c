#include "main.h"

/**
 * err_usage - displays error info when incorrect amount of arguments are given
 * Return: void
 */

void err_usage(void)
{
	char *usage = "Error, usage: ./elf_header elf_file\n";

	write(STDERR_FILENO, usage, strlen(usage));
	exit(98);
}

/**
 * main - displays info contained in the ELF header at the start of an ELF file.
 * @ac: number of command line arguments
 * @av: array of command line arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	ElfW(Ehdr) elfHdr;
	char *buf;
	int fd, wr, sz;

	if (ac != 2)
		err_usage();
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		err_open();
	if (elfHdr.e_type == 0x7f &&
	    elfHdr.e_indent[1] == 'E' &&
	    elfHdr.e_indent[2] == 'L' &&
	    elfHdr.e_indent[3] == 'F')
	{
		printf("ELF Header:\n");
		buf = malloc(sizeof(elfHdr.e_ehsize));
		if (buf == NULL)
			err_mem_alloc();
		sz =, buf, elfHdr.e_ehsize);
	if (sz == -1)
		err_read();
}
	else
		err_not_elf();
}
