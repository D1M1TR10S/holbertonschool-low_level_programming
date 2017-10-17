#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the name, age, and owner of "struct dog"
 * @d: Pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
