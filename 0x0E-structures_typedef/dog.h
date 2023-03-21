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


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /*End DOG_H*/
