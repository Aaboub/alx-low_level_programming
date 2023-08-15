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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);

#endif
