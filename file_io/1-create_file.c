#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: the file to be ceated
 * @text_content: the content of the new file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_write, open_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (open_file == -1)
		return (-1);

	bytes_write = write(open_file, text_content, strlen(text_content));

	if (bytes_write == -1)
		return (-1);

	close(open_file);
	return (1);
}
