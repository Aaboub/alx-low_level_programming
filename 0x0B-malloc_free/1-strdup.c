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
	unsigned int len;

	if (!str)
		return (NULL);

	len = (unsigned int)strlen(str);
	p = malloc((len + 1) * sizeof(char));
	if (p)
		memcpy(p, str, len + 1);
	return (p);
}
