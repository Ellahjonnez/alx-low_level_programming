#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: The string character lenght
 * Return: 0 Always
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = (1 + _strlen_recursion(s + 1));
	}
	return (len);
}
