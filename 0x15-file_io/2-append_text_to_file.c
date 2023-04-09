#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:  the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, writeMe, i = 0;

	/* Checking filename */
	if (filename == NULL)
		return (-1);

	/**
	 * Opening the file in append mode O_APPEND
	 * Use file in read only O_WRONLY
	 */
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	/* Appending txt to file if not empty */
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
