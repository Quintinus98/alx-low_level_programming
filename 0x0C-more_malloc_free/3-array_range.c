#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value (included)
 * @max: max value (included)
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ar, i, k = 0;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (!ar)
		return (NULL);

	for ( i = min; i < (max + 1); i++)
		ar[k++] = i;

	return (ar);
}
