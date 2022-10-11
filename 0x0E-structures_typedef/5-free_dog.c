#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free dog in the memory
 * @d: pointer to dog
 *
 * return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
