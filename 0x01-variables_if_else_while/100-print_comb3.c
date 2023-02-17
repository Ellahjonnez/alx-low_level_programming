#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * A  program that prints all possible different combinations of two digits.
 * Return: 0 always
 */
int main(void)
{
	int i, n;

	for (i = '0'; i <= '9'; i++)
	for (n = i + 1; n <= '9'; n++)
	{
	if (n != i)
	putchar(i);
	putchar(n);
	if (i == '8' && n == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);

}
