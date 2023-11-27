#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check_arguments - Checks for the correct number of arguments.
 *
 * @argc: Number of arguments.
 *
 * Return: void after execution
 */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - Checks if file_from exists and can be read.
 *
 * @check: Result of the check (true or false).
 * @file: File name (file_from).
 * @fd_from: File descriptor of file_from, or -1.
 * @fd_to: File descriptor of file_to, or -1.
 *
 * Return: void
 */
void check_read(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_write - Checks that file_to was created and/or can be written to.
 *
 * @check: Result of the check (true or false).
 * @file: File name (file_to).
 * @fd_from: File descriptor of file_from, or -1.
 * @fd_to: File descriptor of file_to, or -1.
 *
 * Return: void
 */
void check_write(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
		close(fd_from);
		if (fd_to != -1)
		close(fd_to);
		exit(99);
	}
}
/**
 * check_close - Checks that file descriptors were closed properly.
 *
 * @check: Result of the check (true or false).
 * @fd: File descriptor.
 *
 * Return: void
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check_arguments(argc);
/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	check_read((ssize_t)fd_from, argv[1], -1, -1);

/* Set the permissions for the destination file */
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

/* Open or create the destination file for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_write((ssize_t)fd_to, argv[2], fd_from, -1);

	lenr = 1024;
	while (lenr == 1024)
	{
	/* Read from the source file */
		lenr = read(fd_from, buffer, 1024);
		check_read(lenr, argv[1], fd_from, fd_to);

	/* Write to the destination file */
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check_write(lenw, argv[2], fd_from, fd_to);
	}

	/* Close the file descriptors */
	close_to = close(fd_to);
	close_from = close(fd_from);
	check_close(close_to, fd_to);
	check_close(close_from, fd_from);

	return (0);
}
