#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry
 *
 * @nmemb: param
 * @size: param
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p)
	{
		memset(p, 0, nmemb * size);
		return (p);
	}
	else
		return (NULL);
}
