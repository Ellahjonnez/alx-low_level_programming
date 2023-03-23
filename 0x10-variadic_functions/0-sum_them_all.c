#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: unsigned integer
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_all;
	unsigned int i;
	int sum = 0;

	va_start(sum_all, n);
	/* main variadic_functions code done here */
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_all, int);
	va_end(sum_all);

	return (sum);
}
