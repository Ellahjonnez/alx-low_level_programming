#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 always
 */
int main(void)
{
	char alph, ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
		putchar(ALPH);
	putchar('\n');
	return (0);
}
