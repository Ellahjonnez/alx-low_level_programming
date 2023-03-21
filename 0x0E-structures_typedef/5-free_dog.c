#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Let's free all memory allocated for a struct dog
 * @d: the dog element struct dog to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
		if (d != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
}
