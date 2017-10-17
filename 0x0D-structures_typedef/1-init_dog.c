#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initialize variables pointed to by *d
 * @d: Pointer to struct dog
 * @name: Name of the adorable little pup
 * @age: Dog's age (in human years)
 * @owner: Name of the dog's owner
 * Return: void
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
