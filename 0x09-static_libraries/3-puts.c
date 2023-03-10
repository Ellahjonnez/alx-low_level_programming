#include "main.h"

/**
 * _puts - To print a string followed by newline
 * To stdout
 * @str: The string type
 * Return: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
