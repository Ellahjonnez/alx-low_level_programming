#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all single digit numbers of base 10 starting from 0
 * Return: 0 always
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
		putchar(num1 + '0');
	putchar('\n');
	return (0);
}
