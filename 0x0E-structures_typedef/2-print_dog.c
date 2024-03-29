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
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
