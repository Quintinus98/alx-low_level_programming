#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 * @height: width of the grid
 * @grid: grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
