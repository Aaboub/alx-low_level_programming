#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d);

/**
 * print_dog - Entry point
 *
 * @d: desc
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("%s", "");
		return;
	}
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
