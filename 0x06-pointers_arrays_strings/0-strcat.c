#include "main.h"

/**
 * _strncat - To concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to concatenate
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
