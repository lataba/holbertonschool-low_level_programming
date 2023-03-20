#include "dog.h"
#include <string.h>

/**
 * free_dog - function that frees the memory of a dog
 * @d: a pointer to dog information
 */

void free_dog(dog_t *d)

{
	if (d == NULL)
	{
		free(d);
		return;
	}

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
