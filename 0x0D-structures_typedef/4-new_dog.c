#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Print the length of the string
 * @s: Prints length of the string "Holberton"
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}
/**
 * *_strcpy - Copy string from src to dest
 * @src: Source array to get data from
 * @dest: Destination where data is sent to
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * new_dog - A function that creates a new struct with copied strings literals
 * @name: pointer to name of dog coming in
 * @age: variable of dog's age
 * @owner: pointer to name of dog's owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
		if (newDog == NULL)
			return (NULL);

	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}
	newDog->age = age;
	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);

	return (newDog);
}
