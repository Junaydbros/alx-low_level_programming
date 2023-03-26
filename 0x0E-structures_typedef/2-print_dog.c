#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: the structure tag to be printed
 * If an element of d is NULL, print 'nil' instead of the element
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	/* d = malloc(sizeof(struct dog)); */
	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)");
	}
	if (d == NULL)
	{
		return;
	}

	/* d = malloc(sizeof(struct dog)); */

	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner);
}
