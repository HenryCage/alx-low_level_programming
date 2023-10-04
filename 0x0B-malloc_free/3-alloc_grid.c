#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimension array of integers.
 * @width: the width of the grid
 * @height: the length of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int *));

		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
