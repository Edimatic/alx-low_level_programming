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
 * check_data_ver_osabi - Checks the data, version & OS/ABI information of ELF.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */
void check_data_ver_osabi(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		puts("  Data:					2's complement, little endian");
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("  Data:					2's complement, big endian\n");

	printf("  Version:					%d", header->e_ident[EI_VERSION]);

	if (header->e_ident[EI_VERSION] == 1)
		printf(" (current)");

	printf("\n");

	switch (header->e_ident[EI_OSABI])
	{
		
		case ELFOSABI_SYSV:
			printf("  OS/ABI:			UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("  OS/ABI:			UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("  OS/ABI:			UNIX - Solaris\n");
			break;
		default:
			printf("  OS/ABI:			<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}

		printf("  ABI Version:				%d\n", header->e_ident[EI_ABIVERSION]);
}

/**
 * check_type_entry - Checks the type and entry point of ELF file.
 * @header: Pointer to the ELF header struct.
 *
 * Return: void
 */
void check_type_entry(Elf64_Ehdr *header)
{
	switch (header->e_type)
	{
		case ET_EXEC:
			printf("  Type:				EXEC (Executable file)\n");
			break;
		default:
			printf("  Type:				Unknown type\n");
	}

	if (header->e_entry)
		printf("  Entry point address:			0x%x\n", (int)header->e_entry);
	else
		printf("  Entry point address:			0\n");
}

 /**
 * main - Program that prints the ELF header formatted.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings containing the program and the ELF file name.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int fd64;
	int read_char = 1;
	Elf64_Ehdr *header, size;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}

	header = malloc(sizeof(size));
	if (!header)
		exit(98);

	fd64 = open(argv[1], O_RDONLY);
	if (fd64 < 0)
		read_error(argv[1]);

	read_char = read(fd64, header, sizeof(size));
	if (read_char < 0)
		read_error(argv[1]);

	check_elf(header);
	check_data_ver_osabi(header);
	check_type_entry(header);

	free(header);
	close(fd64);
	return (0);
}

