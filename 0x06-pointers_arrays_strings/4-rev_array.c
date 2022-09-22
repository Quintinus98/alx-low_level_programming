#include <stdio.h>
#include "main.h"
/**
 * reverse_array
 * @a: array
 * @n: number of elements in array a
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n-1];
		a[n-1] = tmp;

		n--;
	}
}
