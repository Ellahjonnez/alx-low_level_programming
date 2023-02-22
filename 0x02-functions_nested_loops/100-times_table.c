#include "main.h"

/**
 * print_times_table - To  prints the n times table, starting with 0.
 * @n: Value of the times table to be considered
 * Return: 0 Success
 */

void print_times_table(int n)
{
	int num1;
	int multiply;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
	{
		_putchar('0');
		for (multiply = 1; multiply <= n; multiply++)
	{
		_putchar(',');
		_putchar(' ');
		prod = num1 * multiply;
	if (prod <= 99)
		_putchar(' ');
	if (prod <= 9)
		_putchar(' ');
	if (prod >= 100)
	{
		_putchar((prod / 100) + '0');
		_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
		_putchar((prod / 10) + '0');
	}
		_putchar((prod % 10) + '0');
	}
		_putchar('\n');
	}
	}
}

