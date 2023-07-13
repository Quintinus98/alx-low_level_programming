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
	char *ar;

	ar = malloc(sizeof(int) * b);
	if (ar == NULL)
	{
		printf("NULL\n");
		exit(EXIT_FAILURE);
	}
	return (ar);
}
