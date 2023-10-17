#include "main.h"

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

	len = _strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
