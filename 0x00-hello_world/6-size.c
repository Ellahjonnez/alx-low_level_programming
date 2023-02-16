#include <stdio.h>
/**
 * main - A C program that prints the size of various types on the computer
 * Return: This will return 0 (Success)
 */
int main(void)
{
char a;
int n;
long int l;
long long int fl;
float f;

printf("Size of a char: %c byte(s) \n", a);
printf("Size of an int: %d byte(s) \n", n);
printf("Size of a long int: %ld  byte(s) \n", l);
printf("Size of a long long int: %lld byte(s) \n", fl);
printf("Size of a float: %g byte(s) \n", f);

return (0);
}

