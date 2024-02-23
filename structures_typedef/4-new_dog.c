#include "dog.h"
#include <stdlib.h>

/**
 *new_dog- creates and initializes a new dog_t struct
 *@name: the name of the dog
 *@age the age of the dog
 *@owner: the dog's owner
 *
 *Return: pointer to the new dog_t struct or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *dog;

	dog = malloc(sizeof(dog_t));

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return(dog);
}
