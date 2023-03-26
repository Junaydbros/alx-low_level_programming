#include <stdio.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 * A copy of 'name' and 'owner' has to be stored
 * The function returns 'NULL' on failure
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}


