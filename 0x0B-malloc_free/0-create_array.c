#include <stdlib.h>
#include <string.h>

/**
 * create_array - Entry
 *
 * @size: param
 * @c: char
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p)
		memset(p, c, size);
	return (p);
}
