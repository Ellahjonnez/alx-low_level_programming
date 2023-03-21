#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: The dogs pointers or initializer
 * @name: Names of dogs
 * @age: Ages of dogs
 * @owner: The dog owners
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		/*Assign the dog pinter to vrious elements */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
