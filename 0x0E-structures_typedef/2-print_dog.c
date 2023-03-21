#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: The pointer element
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("name: %s\n", d->name ? d->name : "(nil)");
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
