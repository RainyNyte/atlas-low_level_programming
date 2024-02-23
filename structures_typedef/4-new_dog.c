#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of the given string in a dynamic pointer
 * @str: string to be copied
 *
 * Return: pointer to new string or NULL if fail
 */

char *_strdup(char *str)
{
	char *s;
	size_t len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}

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
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}

	return(dog);
}
