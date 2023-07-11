#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int h, w, **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		ar[h] = malloc(width * sizeof(int));
		if (ar[h] == NULL)
			return (NULL);
		for (w = 0; w < width; w++)
			ar[h][w] = 0;
	}

	return (ar);
}
