#include <stdio.h>
#include "main.h"
/**
 * len - Length of string
 * @s: String
 *
 * Return: 0
 */
int xlen(char *s)
{
	unsigned int cnt = 0;
	
	while (*s != '\0')
	{
		cnt++;
		s++;
	}

	return (cnt + 1);
}
/**
 * _strcpy - String copy function
 * @dest: Destination variable
 * @src: Source variable
 *
 * Return: Returns a character.
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;
	
	len = xlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
