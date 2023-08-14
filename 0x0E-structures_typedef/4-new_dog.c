#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strcpy - Entry
 *
 * @dest: param
 * @src: pram
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	while
		(*dest++ == *src++);
}


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

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 0));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
