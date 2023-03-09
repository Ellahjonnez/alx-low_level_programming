#include "main.h"

/**
 * mainsqrt - To find the natural square root of a number
 * @n: The value for square root calculation
 * @i: iteration value
 * Return: the resulting square root
 */

int mainsqrt(int n, int i)
{
		if (i * i > n)
		{
			return (-1);
		}
		if (i * i == n)
		{
			return (i);
		}
		return (mainsqrt(n, i + 1));
}

/**
 * _sqrt_recursion - To return the natural square root of a number.
 * @n: The natural number to calculate the square root
 * Return: The natural root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (mainsqrt(n, 0));
	}
}

