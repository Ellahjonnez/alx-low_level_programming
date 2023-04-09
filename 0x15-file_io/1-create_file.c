#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, writeMe, i = 0;

	/* Checking filename */
	if (filename == NULL)
		return (-1);

	/**
	 * Opening the file to write only O_WRONLY
	 * If file doesn't exist, create it O_CREAT
	 * If file exists, truncate to zero lenght O_TRUNC
	 */
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	/* Writing txt to file if not empty */
	if (text_content)
	{
		while (text_content[i])
			i++; /* Count and increament char in txt */

		writeMe = write(fp, text_content, i);
		if (writeMe == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
