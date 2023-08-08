#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Entry
 *
 * @grid: param
 * @height: param
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
