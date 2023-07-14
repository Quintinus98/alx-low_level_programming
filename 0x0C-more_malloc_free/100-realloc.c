#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr is a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar, *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ar = malloc(new_size);

	ar = malloc(new_size);
	if (!ar)
		return (NULL);

	tmp = ptr;

	if (new_size > old_size)
		for (i = 0; i < new_size; i++)
			ar[i] = tmp[i];

	if (new_size < old_size)
		for (i = 0; i < old_size; i++)
			ar[i] = tmp[i];

	free(ptr);
	return (ar);
}
