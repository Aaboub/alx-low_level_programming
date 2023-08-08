#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Entry
 *
 * @ac: param
 * @av: param
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *p, *q;
	int i, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += (unsigned int)strlen(av[i]);
	}

	p = malloc(len + ac + 1);
	if (p)
	{
		q = p;
		for (i = 0; i < ac; i++)
		{
			len = (int)strlen(av[i]);
			memcpy(q, av[i], len);
			memcpy(q + len, "\n", 1);
			q = q + len + 1;
		}
		return (p);
	}
	else
		return (NULL);
}
