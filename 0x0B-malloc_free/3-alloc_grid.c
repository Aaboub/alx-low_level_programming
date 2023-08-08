#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry
 *
 * @width: param
 * @height: param
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));
			if (p[i])
			{
				memset(p[i], 0, width);
			}
			else
			{
				return (NULL);
			}
		}
		return (p);
	}
	else
		return (NULL);
}
