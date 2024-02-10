// #include "search_algos.h"

// /**
//  * jump_search - Searches for a value in array using Jump search algo
//  * @array: Pointer to the first element of the array
//  * @size: number of elements in the array
//  * @value: value to search for
//  * Return: the first index where value is located
// */
// int jump_search(int *array, size_t size, int value)
// {
// 	size_t first, jump = sqrt(size);
// 	size_t i = 0, next = jump;

// 	if (array == NULL || size == 0)
// 		return (-1);

// 	while (first <= size)
// 	{
// 		/* code */
// 		/* |0| 1, 2, |3| 4, 5, |6| 7, 8, |9| */
// 		printf("Value checked array[%ld] = [%d]\n", first, array[first]);
// 		if (array[next] >= value || next >= size)
// 		{
// 			/* check the block */
// 			printf("Value found between indexes [%ld] and [%ld]\n", first, next);
// 			for (i = first; i <= next && i < size; i++)
// 			{
// 				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
// 				if (array[i] == value)
// 					return (i);
// 			}
// 		}
// 		first = next;
// 		next = first + jump;
// 	}
// 	return (-1);
// }