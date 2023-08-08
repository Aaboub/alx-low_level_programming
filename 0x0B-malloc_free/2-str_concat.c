#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry
 *
 * @s1: param
 * @s2: param
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int len1, len2;

	if (s1)
		len1 = (unsigned int)strlen(s1);
	if (s2)
		len2 = (unsigned int)strlen(s2);

	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p)
	{
		memcpy(p, s1, len1);
		memcpy(p + len1, s2, len2 + 1);
		return (p);
	}
	else
		return (NULL);
}
