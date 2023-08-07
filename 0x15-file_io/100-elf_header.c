#define _POSIX_C_SOURCE 200809L
#include <elf.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_error - Exits the program with an error message.
 * @argv: The name of the program file.
 *
 * Return: void
 */

void read_error(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}

/**
 * check_elf - Checks the format of the file and prints the ELF magic number.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */

void check_elf(Elf64_Ehdr *header)
{
	int k = 0;

	if (header->e_ident[EI_MAG0] == 0x7f &&
	    header->e_ident[EI_MAG1] == 'E' &&
	    header->e_ident[EI_MAG2] == 'L' &&
	    header->e_ident[EI_MAG3] == 'F')
	{
		printf("ELF Header:\n");
		printf("  Magic:  ");

		for (k = 0; k < EI_NIDENT; k++)
			printf(" %02x", header->e_ident[k]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Format error, not an ELF\n");
		exit(98);
	}
}

/**
 * check_class - Checks the class of the ELF format of the file.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */
void check_class(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("  Class:                             ELF32\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("  Class:                             ELF64\n");
}

/**
 * check_data_ver - Checks the data and version of the ELF format.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */
void check_data_ver(Elf64_Ehdr *header)
{

	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		puts("  Data:                              2's complement, little endian");
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("  Data:                              2's complement, big endian\n");
	if (header->e_ident[EI_VERSION] != 1)
		printf("  Version:                           1\n");
	if (header->e_ident[EI_VERSION] == 1)
		printf("  Version:                           1 (current)\n");
	if (header->e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("  OS/ABI:                            UNIX - System V\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("  OS/ABI:                            UNIX - System V\n");
	if (header->e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("  OS/ABI:                            UNIX - NetBSD\n");
	if (header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("  OS/ABI:                            UNIX - Solaris\n");
	if (header->e_ident[EI_OSABI] == 0x53)
		printf("  OS/ABI:                            <unknown: 53>\n");
	if (header->e_ident[EI_ABIVERSION] == 0)
		printf("  ABI Version:                       0\n");
	if (header->e_ident[EI_ABIVERSION] == 1)
		printf("  ABI Version:                       1\n");
}

/**
 * check_type - Checks the type of ELF file.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */
void check_type(Elf64_Ehdr *header)
{
	switch (header->e_type)
	{
		case ET_EXEC:
			printf("  Type:                              EXEC (Executable file)\n");
			break;
		default:
			printf("  Type:                              Unknown type\n");
	}
}

/**
 * check_entry - Checks the entry point of ELF file.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */
void check_entry(Elf64_Ehdr *header)
{
	printf("  Entry point address:		0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Program that prints the ELF header formatted.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings containing the program and the ELF file name.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_descriptor;
	ssize_t read_bytes;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
		read_error(argv[1]);

	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
		exit(98);

	read_bytes = read(file_descriptor, header, sizeof(Elf64_Ehdr));
	if (read_bytes < 0)
		read_error(argv[1]);

	check_elf(header);
	check_class(header);
	check_data_ver(header);
	check_type(header);
	check_entry(header);

	free(header);
	close(file_descriptor);
	return (0);
}

