#include "main.h"

/**
 * _pow_recursion - To returns the value of x raised to the power of y
 * @x: The value of X
 * @y: The value of Y
 * Return: -1 Success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

