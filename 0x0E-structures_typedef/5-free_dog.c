#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Entry point
 *
 * @d: desc
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
