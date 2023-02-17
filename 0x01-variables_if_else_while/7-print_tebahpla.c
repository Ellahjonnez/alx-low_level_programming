#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the lowercase alphabet in reverse.
 * Return: 0 always
 */
int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
		putchar(lowcase);
	putchar('\n');
	return (0);

}
