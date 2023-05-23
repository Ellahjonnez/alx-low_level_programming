#include "main.h"

/**
 * _strcmp - To compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if strings are equal, otherwise difference between first
 * different characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
