#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - a function that free dog
 *@d: a parameter
 */
void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
