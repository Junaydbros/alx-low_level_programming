#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type 'struct dog'
 * @d: the variable representing the structure declaration
 * @name: the variable representing the name
 * @age: the variable representing the age
 * @owner: the variable representing the owner
 *
 * REturn: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{	

	d->name = name;
	d->age = age;
	d->owner = owner;
}
