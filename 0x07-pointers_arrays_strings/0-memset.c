#include "main.h"

/**
 * _memset - To fill a memory with constant byte
 * @s: The pointer to the memory
 * @b: The contant byte
 * @n: The number of bytes to be filled
 * Return: s Pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}
