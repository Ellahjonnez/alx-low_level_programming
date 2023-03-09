#include "main.h"

/**
 * _puts_recursion - To print a string, followed by a new line.
 * Using recursion and _putchar
 * @s: Character
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
