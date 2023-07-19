#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: Arrays to print
 * @size: the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first elem for which the cmp function is not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
