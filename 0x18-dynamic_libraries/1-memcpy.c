#include "main.h"
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
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = destAdd;

	return (dest);
}
