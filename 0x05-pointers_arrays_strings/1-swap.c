#include <stdio.h>
/**
 * swap_int - Swaps two integers
 * @a: First integer value
 * @b: Second integer value
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
