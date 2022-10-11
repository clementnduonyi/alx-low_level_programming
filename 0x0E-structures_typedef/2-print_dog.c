#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints a struct dog
 * struct dog - type definition
 * @d: variable of type dog
 *
 * Return nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: nil\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{	
			printf("Age: nil\n");
		}
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
	}	
}
