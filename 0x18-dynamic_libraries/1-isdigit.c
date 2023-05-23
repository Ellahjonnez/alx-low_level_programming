#include "main.h"

/**
 * _isdigit - Entry point
 * To  Check for a digit between 0 & 9
 * @c: Integer
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
