#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The integer
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	/*Allocate memory of size b using malloc*/
	void *ptr = malloc(b);

	/*checks if malloc fails*/
	if (ptr == NULL)
	{
		exit(98); /* If malloc fails, terminate program with the status 98*/
	}
	return (ptr);
}
