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
 * append_text_to_file - Appends a text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil_des;
	ssize_t content_length;

	if (filename == NULL)
	return (-1);

/* Open the file for writing, and append to it if it exists */
	fil_des = open(filename, O_WRONLY | O_APPEND);
	if (fil_des == -1)
		return (-1);

if (text_content != NULL)
	{
		/* Write the text content to the file */
content_length = write(fil_des, text_content, _strlen(text_content));
	}

	close(fil_des);

	if (content_length == -1)
		return (-1);

	return (1);
}
