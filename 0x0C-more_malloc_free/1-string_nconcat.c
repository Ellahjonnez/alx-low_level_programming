#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The first character
 * @s2: The second character
 * @n: The number of bytes
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len;
	char *result;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	/* Finding the lenght of the 2 putputs */
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	/* Memory Allocation for the string result*/
	result = malloc(s1_len + n + 1);
	if (!result)
	{
		return (NULL);
	}

	/* To copy s1 to the beginning of result */
	memcpy(result, s1, s1_len);
	/* Then copy first n byte of s2 to the end of the result string */
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}

