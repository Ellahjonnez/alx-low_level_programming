#include "main.h"

/**
 * _strlen - To return the lenght of a string
 *
 * @s: The string pointer
 *Return: int
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;

	return (len);
}
