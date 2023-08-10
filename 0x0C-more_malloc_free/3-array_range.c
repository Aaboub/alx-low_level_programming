#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry
 *
 * @min: param
 * @max: param
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p)
	{
		j = min;
		for (i = 0; i <= max - min; i++)
		{
			p[i] = j;
			j++;
		}
		return (p);
	}
	else
		return (NULL);
}
