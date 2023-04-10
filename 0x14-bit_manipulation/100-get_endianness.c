#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;

	char *data = (char *)&num;

	if (*data)
	{
		/* For ittle endian */
		return (1);
	}
	else
	{
		/* For big endian */
		return (0);
	}

}
