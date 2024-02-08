#include "search_algos.h"

/**
 * linear_search - Searches for a value in array using Linear search algo
 * @array: Pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
