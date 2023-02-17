#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * A  program that prints all possible different combinations of three digits.
 * Return: 0 always
 */
int main(void)
{
	int i, n, p;

	for (i = '0'; i < '9'; i++)
	for (n = i + 1; n <= '9'; n++)
	for (p = n + 1; p <= '9'; p++)
	{
	if ((n != i) != p)
	putchar(i);
	putchar(n);
	putchar(p);
	if (i == '7' && n == '8')
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
