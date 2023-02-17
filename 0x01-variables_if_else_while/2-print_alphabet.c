#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the alphabet in lowercase
 * Return: 0 always (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
