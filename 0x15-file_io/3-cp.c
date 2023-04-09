#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * description: to copy the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */

int main(int argc, char *argv[])
{
	int fp_from, fp_to, readMe, writeMe;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* open file_from */
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open file_to */
	fp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* read from file_from and write to file_to */
	while ((readMe = read(fp_from, buffer, 1024)) > 0)
	{
		writeMe = write(fp_to, buffer, readMe);
		if (writeMe == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (readMe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fp_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from), exit(100);

	if (close(fp_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to), exit(100);

	return (0);
}
