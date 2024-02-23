#include "dog.h"
#include <stdlib.h>

/**
 *init_dog- initializes a struct dog variable and assigns the values
 *to it's members
 *@d: the dog struct to be initialized
 *@name: the name of the dog
 *@age: the dog's age
 *@owner: the owner of the dog
 *
 *Return: a pointer to the initialized structure or NULL on failure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
