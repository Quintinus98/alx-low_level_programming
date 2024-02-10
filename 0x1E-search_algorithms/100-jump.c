#include "search_algos.h"

/**
 * _min - Returns the min value
 * @a: first value
 * @b: second value
 * Return: min value
*/
size_t _min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * jump_search - Searches for a value in array using Jump search algo
 * @array: Pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t steps = 0, jump = sqrt(size), j_step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", steps, array[steps]);
	while (array[_min(jump, size) - 1] < value)
	{
		steps = jump;
		jump += j_step;
		printf("Value checked array[%ld] = [%d]\n", steps, array[steps]);
		if (jump > size)
			break;
		if (array[jump] == value)
			break;
		if (steps >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", steps, jump);
	while (array[steps] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", steps, array[steps]);
		steps += 1;
		if (array[steps] == value)
			break;
		if (steps == _min(jump, size))
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", steps, array[steps]);
	if (array[steps] == value)
		return (steps);
	else
		return (-1);
}
