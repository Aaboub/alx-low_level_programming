#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry
 *
 * @s1: param
 * @s2: param
 * @n: param
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0;

	if (s1)
		len1 = (unsigned int)strlen(s1);
	if (s2)
		len2 = (unsigned int)strlen(s2);

	if (n >= len2)
		n = len2;

	p = malloc((len1 + n + 1) * sizeof(char));
	if (p)
	{
		if (s1)
			memcpy(p, s1, len1);
		if (s2)
			memcpy(p + len1, s2, n);
		return (p);
	}
	else
		return (NULL);
}
