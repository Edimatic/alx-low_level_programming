#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
size_t _strlen(char *str)
{
	size_t length;

	for (length = 0; str[length]; length++)
		;
	return (length);
}

/**
 * create_file - Creates a file and writes content to it.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f_descriptor;
	ssize_t content_length = 0;

	if (filename == NULL)
		return (-1);

/* Open file for writing, create if it doesn't exist, truncate if it does */
f_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_descriptor == -1)
		return (-1);

if (text_content != NULL)
	{
/* Write the text content to the file */
content_length = write(f_descriptor, text_content, _strlen(text_content));
	}

	close(f_descriptor);

	if (content_length == -1)
		return (-1);

	return (1);
}

