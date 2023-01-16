#include "dog.h"
/**
 * init_dog - a function
 * @name: a parameter
 * @age: an age
 * @owner: an owner
 * @d: a structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
