#ifndef PUPPY
#define PUPPY
#define DOG
/**
 * struct dog - Structure of information about a dog.
 * @name: Dog's name
 * @age: Age of the dog
 * @owner: Name of owner
 * Description: name, age, and owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
