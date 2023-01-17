#include "dog.h"
#include <stdio.h>
/**
 *print_dog - a function
 *@d: a parameter
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", &d->name == NULL ? "(nil)\n" : d->name);
		if (&d->age == NULL)
			printf("(nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (&d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
