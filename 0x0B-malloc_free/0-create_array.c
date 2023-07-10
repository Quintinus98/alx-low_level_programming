#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array using memory allocation.
 * @size: size of the desired array
 * @c: a character
 *
 * Return: a pointer to the array or null.
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
