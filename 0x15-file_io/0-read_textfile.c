#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX output.
 * @filename: Name of the file to read.
 * @letters: Number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t letters_read, letters_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	/* Read from the file */
	letters_read = read(file_descriptor, buffer, letters);
	close(file_descriptor);

	if (letters_read == -1)
	{
		free(buffer);
		return (0);
}

	/* Write to the standard output */
	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	free(buffer);

	if (letters_read != letters_written)
		return (0);

	return (letters_written);
}
