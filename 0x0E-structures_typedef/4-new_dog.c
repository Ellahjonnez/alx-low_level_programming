#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog.
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: New dog's owner
 *
 * Return: NULL or Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Let's allocate memory for our new dog struct */
	dog_t *bingo = malloc(sizeof(dog_t));
	/* The name of our new dog is Bingo */
	/* Checking for failed memory allocation */
	if (bingo == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for dog's name */
	bingo->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	/* Allocate memory for dog's owner */
	bingo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	/* Copy the name and owner strings to the new struct */
	strcpy(bingo->name, name);
	strcpy(bingo->owner, owner);
	/* Setting the age of the new dog */
	bingo->age = age;

	return (bingo);

}
