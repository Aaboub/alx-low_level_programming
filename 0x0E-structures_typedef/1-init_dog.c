#include "dog.h"

/**
 * init_dog - Entry point
 *
 * @d: desc
 * @name: desc
 * @age: desc
 * @owner: desc
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
