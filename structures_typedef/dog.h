#ifndef DOG_H
#define DOG_H

/**
 *dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 *struct dog- structure to store information about a dog
 *@name: the name of the dog
 *@age: the dog's age
 *@owner: the owner of the dog
 *
 *Description: Allows the user to generate variables which store the name, age
 *and owner of a dog in a single block of memory for ease of access
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
