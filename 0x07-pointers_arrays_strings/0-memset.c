#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: First n bytes of the memory area pointed to by @s
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = s;

	for (; i < n; i++)
	{
		*s = b;
		s++;
	}
	s = p;

	return (s);

}
