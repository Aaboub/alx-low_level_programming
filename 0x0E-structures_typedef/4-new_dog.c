#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
		((*dest++ = *src++) != '\0');
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
	dog->name = malloc(sizeof(char) * ((int)strlen(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * ((int)strlen(owner) + 1));
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
