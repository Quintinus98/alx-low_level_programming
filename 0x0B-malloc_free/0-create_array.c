#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main program
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: Exit success
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
