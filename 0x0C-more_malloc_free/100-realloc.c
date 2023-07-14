#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: Source memory area
 * @n: Copies
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destAdd = dest;
	unsigned int i = 0;

	for (; i < n; i++)
		*dest++ = *src++;
	dest = destAdd;

	return (dest);
}

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
	void *ar;

	if (ptr == NULL)
		ar = malloc(new_size);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		ar = malloc(new_size);
		ar = _memcpy(ar, ptr, new_size);
		free(ptr);
	}

	return (ar);
}
