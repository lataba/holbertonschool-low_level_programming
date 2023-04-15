#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it to stdout
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: the number of written bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_write, open_file;

	if (filename == NULL)
		return (0);
	open_file = open(filename, O_RDONLY);

	if (open_file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		close(open_file);
		return (0);
	}

	bytes_read = read(open_file, buffer, letters);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_read == -1 || bytes_write == -1 || bytes_write < bytes_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open_file);
	return (bytes_write);
}
