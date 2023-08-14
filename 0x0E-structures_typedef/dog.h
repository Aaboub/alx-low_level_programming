#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dec
 *
 * @name: desc
 * @age: desc
 * @owner: desc
 *
 * Description: desc
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif
