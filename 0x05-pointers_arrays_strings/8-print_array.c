#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints array value
 * @a: array
 * @n: number of values to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
