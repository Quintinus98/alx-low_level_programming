#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: an unsigned Integer
 *
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ar;

	if (b <= 0)
		exit(98);

	ar = malloc(sizeof(b) * b);
	if (ar == NULL)
		exit(98);

	return (ar);
}
