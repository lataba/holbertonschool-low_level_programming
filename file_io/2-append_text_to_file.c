#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the file
 * @text_content: the content to be added
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_write, open_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_WRONLY | O_APPEND);

	if (open_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_write = write(open_file, text_content, strlen(text_content));
		if (bytes_write == -1)
			return (-1);
	}

	close(open_file);
	return (1);
}
