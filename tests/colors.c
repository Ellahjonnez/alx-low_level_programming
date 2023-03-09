#include <stdio.h>
#include <stdlib.h>
/**
 * main - To print array of colors
 * Return: 0
 */

int main(void)
{
	char colors[7][12] = {"Red", "Yellow", "Brown", "Purple", "Orange", "Blue", "White"};
	int i;

	printf("The Colors are:\n"); 

	for (i = 0; i <= 7; i++)
	{
		printf("%s ", colors[i]);
	}
	printf("\n");
	
	return (0);
}

