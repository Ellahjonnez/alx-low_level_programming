#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 * -If there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	for (number = 0; b && *b; b++)

	{
		/* Checking pointer for invalid char */
		if (*b != '0' && *b != '1')
			return (0);

		number <<= 1; /* Shift number left and add bit */
		number += *b - '0';
	}

	return (number);
}
