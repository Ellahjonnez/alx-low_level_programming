#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: Unsigned int
 * @c: The character
 *
 * Return: pointer to array or NULL if size is 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *len;
	unsigned int i;

	len = malloc(size * sizeof(char));

	if (size == 0 || len == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		len[i] = c;
	}
	return (len);
}

