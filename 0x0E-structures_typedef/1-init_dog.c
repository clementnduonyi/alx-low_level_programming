#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initailizes a variable of type dog
 * struct dog - type definition
 * @d: variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
