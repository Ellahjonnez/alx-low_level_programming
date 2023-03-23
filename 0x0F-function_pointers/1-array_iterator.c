#include <stdio.h>

#include "function_pointers.h"

/**
 * array_iterator - Function thats executes a function
 * on each element of an array
 * @array: Pointer to array
 * @size: Size of the array
 * @action: pointer to function to execute on each element of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

		if (!array || !action)
	{
		return;
		}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
