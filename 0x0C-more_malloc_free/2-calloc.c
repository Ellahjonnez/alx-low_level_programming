#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - Memory Allocation for an array, using malloc
 * @nmemb: First Integer
 * @size: Second Integer
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int max_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Calculating the maximum size of memory block to allocate */
	max_size = nmemb * size;

	/* Memory allocation using malloc */
	ptr = malloc(max_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Setting allocated memory to zero */
	memset(ptr, 0, max_size);
	return (ptr);
}
