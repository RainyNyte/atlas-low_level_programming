#include "dog.h"
#include <stdlib.h>

/**
 *free_dog- frees all allocated values of the struct passed to it, as well
 *as the struct itself
 *@d: the struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
