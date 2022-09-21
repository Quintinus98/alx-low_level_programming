#include <stdio.h>
#include "main.h"
/**
 * _strncpy - String Concatenation fn
 * @dest: destinination
 * @src: Source
 * @n: number of bytes from src
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
