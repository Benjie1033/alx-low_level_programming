# include "dog.h"

/**
 * free_dog - function to free the dog
 * @d: dog characters
 * Return 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
