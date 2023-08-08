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

	if (!str)
		return (NULL);
	p = malloc((len + 1) * sizeof(char));
	if (p)
		memcpy(p, str, len + 1);
	return (p);
}
