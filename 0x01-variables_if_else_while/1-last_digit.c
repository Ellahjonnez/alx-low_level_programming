#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * To assign a random number to the variable n each time it is executed
 * Return: 0 always (Success)
 */
int main(void)
{
	int n;

	int l_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_number = (n % 10);
	/* your code goes there */
	if (l_number > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, l_number);
	else if (l_number == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_number);
	else if (l_number < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_number);
	return (0);
}
