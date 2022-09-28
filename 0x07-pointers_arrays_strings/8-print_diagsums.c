#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of two diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int k = size - 1;
	int sum = 0;
	int res = 0;

	for (j = 0; j < size; j++)
	{
		i = (j * size) + j;
		sum += a[i];
	}
	for (j = 0; j < size;  j++)
	{
		i = (j * size) + (k - j);
		res += a[i];
	}
	printf("%d, %d\n", sum, res);
}
