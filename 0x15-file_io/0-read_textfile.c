#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readMe, writeMe;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	readMe = read(fd, buffer, letters);
	if (readMe == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	writeMe = write(STDOUT_FILENO, buffer, readMe);
	if (writeMe == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (writeMe);
}
