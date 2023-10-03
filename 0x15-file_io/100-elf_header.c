#include "main.h"

/**
 * print_entry_address - prints the entry address of the elf file
 * @e_entry: the virtual address to which the system first transfers control
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_entry_address(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * print_type - prints the object file type
 * @e_type: array of bytes specifying how to interpret file
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x\n", e_type);
	}
}

/**
 * print_abi - prints the version of the ABI to which the object is targeted
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI:                               %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_osabi - prints theoperating system & ABI
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("UNIX - ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("UNIX - Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_version - prints the version number of the ELF specification
 * @e_version: identifies the file version
 * Return: void
 */

void print_version(unsigned short int e_version)
{
	printf("  Version:                           ");
	switch (e_version)
	{
	case EV_CURRENT:
		printf("%d (current)\n", e_version);
		break;
	default:
		printf("%i\n", e_version);
	}
}

/**
 * print_data - prints the data encoding of an elf file header
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	case ELFDATANONE:
		printf("none\n");
		break;
	default:
		printf("unknown: %x\n", e_ident[EI_DATA]);
	}
}

/**
 * print_class - prints the class of an elf file header
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	case ELFCLASSNONE:
		printf("none\n");
		break;
	default:
		printf("unkown: %x\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_magic - prints the magic numbers of an elf file header
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void print_magic(unsigned char *e_ident)
{
	int x = 0;

	printf("  Magic:   ");
	while (x < EI_NIDENT)
	{
		printf("%02x", e_ident[x]);
		if ((x + 1) < EI_NIDENT)
			printf(" ");
		x++;
	}
	printf("\n");
}

/**
 * is_file_elf - displays error info when file isn't an elf file
 * @fn: filename
 * @e_ident: array of bytes specifying how to interpret file
 * Return: void
 */

void is_file_elf(const char *fn, unsigned char *e_ident)
{
	if (!(e_ident[0] == 0x7f &&
	    e_ident[1] == 'E' &&
	    e_ident[2] == 'L' &&
	     e_ident[3] == 'F'))
	{
		dprintf(STDERR_FILENO, "Error:%s is not an elf file\n", fn);
		exit(98);
	}
}

/**
 * err_usage - displays error info when incorrect amount of arguments are given
 * Return: void
 */

void err_usage(void)
{
	char *usage = "Usage: ./elf_header elf_file\n";

	dprintf(STDERR_FILENO, "%s", usage);
	exit(98);
}

/**
 * err_read - displays error info read fails
 * @fn: filename
 * Return: void
 */

void err_read(const char *fn)
{
	dprintf(STDERR_FILENO, "Could not read file %s\n", fn);
	exit(98);
}

/**
 * err_open - displays error info when open fails
 * @fn: filename
 * Return: void
 */

void err_open(const char *fn)
{
	dprintf(STDERR_FILENO, "Could not open file %s\n", fn);
	exit(98);
}

/**
 * main - displays info contained in the ELF header @ start of an ELF file.
 * @ac: number of command line arguments
 * @av: array of command line arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	Elf64_Ehdr *header;
	int fd, rd;

	if (ac != 2)
		err_usage();
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		err_open(av[1]);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(fd);
		free(header);
		dprintf(STDERR_FILENO, "Error allocating memory. Exiting...");
		exit(98);
	}
	rd = read(fd, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		close(fd);
		free(header);
		err_read(av[1]);
	}
	is_file_elf(av[1], header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_version);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry_address(header->e_entry, header->e_ident);
	close(fd);
	free(header);
	return (0);
}
