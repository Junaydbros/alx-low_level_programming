#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog details
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: void
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Junaydbros */
#endif
