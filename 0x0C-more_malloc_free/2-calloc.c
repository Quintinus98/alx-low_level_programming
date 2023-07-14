#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in memory for an array
 * @size: size of bytes
 *
 * Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (!nmemb || !size)
		return (NULL);

	ar = malloc(size * nmemb);
	if (!ar)
		return (NULL);

	return (ar);
}
