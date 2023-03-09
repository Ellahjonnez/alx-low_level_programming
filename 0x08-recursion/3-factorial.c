#include "main.h"

/**
 * factorial - To return the factorial of a given number
 * @n: The number of factorial
 * Return: 0 Always success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));

}
