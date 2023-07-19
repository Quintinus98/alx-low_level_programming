#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: Name to print
 * @size: size of array
 * @action: function to call
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action || !size || !array)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
		action(array[i]);

}
