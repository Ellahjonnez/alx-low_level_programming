#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip 
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get from one number to
 * another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_bitwise = n ^ m;
	unsigned int counter = 0;

	while (xor_bitwise)
	{
		counter++;
		/* clear the least significant bit that is set */
		xor_bitwise &= xor_bitwise - 1;
	}

	return (counter);
}
