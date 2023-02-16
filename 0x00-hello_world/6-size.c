#include <stdio.h>
/**
 * main - A C program that prints the size of various types on the computer
 * Return: This will return 0 (Success)
 */
int main(void)
{
char a = '1';
int n = 4;
long int l = 4;
long long int fl = 8;
float f = 4;

printf("Size of a char: %c byte(s) \n", a);
printf("Size of an int: %d byte(s) \n", n);
printf("Size of a long int: %ld  byte(s) \n", l);
printf("Size of a long long int: %lld byte(s) \n", fl);
printf("Size of a float: %f byte(s) \n", f);

return (0);
}

