#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Type definition
 * @name: name of dog
 * @age: How old is the dog
 * @owner: Who is the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */