#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Defines dog data type using the following elements
 * @name: Names of dogs
 * @age: Their ages
 * @owner: Their owners
 * Return: 0 always
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /*End DOG_H*/
