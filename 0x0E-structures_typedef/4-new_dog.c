#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strcpy - Copies strings from sources to destination
 * @str: String to be copy
 *
 * Return: a pointer to the copied string
 */

char *_strcpy(char *str)
{
	char *ar;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{}
	ar = malloc(sizeof(char) * i + 1);
	if (ar == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		ar[j] = str[j];
	ar[j] = 0;
	return (ar);
}
/**
 * new_dog - Create new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *cpyn;
	char *cpyo;
	
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	cpyn = _strcpy(name);
	if (!cpyn && name)
	{
		free(new_d);
		return (NULL);
	}
	cpyo = _strcpy(owner);
       if (!cpyo && owner)
       {
	       free(new_d);
	       free(cpyn);
	       return (NULL);
       }	       

	new_d->name = cpyn;
	new_d->age = age;
	new_d->owner = cpyo;

	return (new_d);
}
