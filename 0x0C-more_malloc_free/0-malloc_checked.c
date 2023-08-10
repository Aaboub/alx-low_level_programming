#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *
 * @b: param
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
