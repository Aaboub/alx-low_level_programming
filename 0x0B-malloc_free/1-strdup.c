#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry
 *
 * @str: param
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int len = (unsigned int)strlen(str);


	p = malloc(len * sizeof(char));
	if (p)
		memcpy(p, str, len);
	return (p);
}
