#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Entry point
 *
 * @name: desc
 * @age: desc
 * @owner: desc
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
