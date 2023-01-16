#include "dog.h"
#include <stdio.h>
/**
 *print_dog - a function
 *@d: a parameter
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", &d->name == NULL ? "(nil)" : d->name);
		if (&d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
