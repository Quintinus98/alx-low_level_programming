#include "search_algos.h"

/**
 * binary_search - Searches for a value in array using Binary search algo
 * @array: Pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d ,", array[i]);

		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}
