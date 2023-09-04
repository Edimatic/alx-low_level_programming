#define _POSIX_C_SOURCE 200809L
#include <elf.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_error - function that exits the program
 * @argv: argument
 * Return: void
 */

void read_error(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * check_elf - function that checks the format of the file, prints magic num
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_elf(Elf64_Ehdr *header)
{
	int i = 0;

	if (header->e_ident[EI_MAG0] == 0x7f &&
	    header->e_ident[EI_MAG1] == 'E' &&
	    header->e_ident[EI_MAG2] == 'L' &&
	    header->e_ident[EI_MAG3] == 'F')
	{
		printf("ELF Header:\n");
		printf("  Magic:  ");

		for (i = 0; i < 16; i++)
			printf(" %02x", header->e_ident[i]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Format error, not an ELF\n");
		exit(98);
	}
}

/**
 * check_class - function that checks the class of ELF format of the file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_class(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("  Class:                             ELF32\n");
	if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("  Class:                             ELF64\n");
}

/**
 * check_data_ver - function that checks the data and version of ELF
 * @header: pointer to the ELF header struct
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
 * check_type - function that checks the type of ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_type(Elf64_Ehdr *header)
{
	if (header->e_type == ET_EXEC)
		printf("  Type:                              EXEC (Executable file)\n");
	if (header->e_type == ET_NONE)
		printf("  Type:                              Unknown type\n");
}

/**
 * check_entry - function that checks the type of ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_entry(Elf64_Ehdr *header)
{
	if (header->e_entry)
		printf("  Entry point address:               0x%x\n", (int)header->e_entry);
	else
		printf("  Entry point address:               0\n");
}

/**
 * main - program that prints ELF header formated
 * @argc: number of arguments passed to the program
 * @argv: string containing of the program and the ELF file
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd64, read_char = 1;
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
	check_class(header);
	check_data_ver(header);
	check_type(header);
	check_entry(header);

	free(header);
	close(fd64);
	return (0);
}
