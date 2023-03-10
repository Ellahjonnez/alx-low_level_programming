#include "main.h"

/**
 * _memcpy - A function that copies memory areas
 * @dest: The memory destination
 * @src: The memory source
 * @n: The memory value in bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (res);
}
