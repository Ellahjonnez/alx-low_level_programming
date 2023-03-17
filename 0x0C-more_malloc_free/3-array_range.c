#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - To creates an array of integers
 * @min: First integer
 * @max: Second integer
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
	{
		return (NULL);
	}
	/* Calculating the size of the array */
	size = max - min + 1;

	/* Then allocate memory for the array */
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
		/* Putting values in array from min to max */
	}
	return (array);
}
