#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to be set
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Checking range of index 1 - 8 (index is not more than 8 bits) */
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*  Setting the value of a bit to 1 at a given index */
	*n |= 1 << index;

	return (1);
}
