#include "dog.h"
#include <stdlib.h>

/**
 *_strncpy- coppies at most the first n characters of a string
 *@dest: string to coppy to
 *@src: string to be coppied
 *@n: maximum number of character to copy
 *
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		for ( ; src[i] == '\0'; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

/**
 *_strlen- finds the length of a string
 *@s: pointer to the string that we are finding the length of
 *
 *Return: the length of the string located at *s
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			len++;
			i++;
		}
	}
	return (len);
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
	char *n;
	char *o;
	int n_len;
	int o_len;

	n_len = _strlen(name);
	o_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	n = malloc(sizeof(char) * (n_len + 1));
	o = malloc(sizeof(char) * (o_len + 1));

	n = _strcpy(n, name);
	o = _strcpy(o, owner);
	dog->name = n;
	dog->age = age;
	dog->owner = o;

	return(dog);
}
