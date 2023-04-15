#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *new_buffer(char *file);
void close_file(int file_desc);

/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array of pointers to the arguments
* Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int a, b, byte_read, byte_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = new_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	byte_read = read(a, buffer, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || byte_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		byte_write = write(b, buffer, byte_read);
		if (b == -1 || byte_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		byte_read = read(a, buffer, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);

	} while (byte_read > 0);

	free(buffer);
	close_file(b);
	close_file(a);

	return (0);
}

/**
 * new_buffer - allocates 1024 bytes for a buffer
 * @file: name of the file b
 * Return: a pointer to the buffer
 */

char *new_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @file_desc: file descriptor to be closed
 */

void close_file(int file_desc)
{
	int c;

	c = close(file_desc);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}
