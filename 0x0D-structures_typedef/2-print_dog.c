#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the name, age, and owner of "struct dog"
 * @d - Pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");
		
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
	else
		printf("(nil)");
}
