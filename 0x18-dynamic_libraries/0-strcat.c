#include "main.h"

/**
 * _strcat - String Concatenation fn
 * @dest: destinination
 * @src: Source
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int cntdest = _strlen(dest);
	int cntSrc = _strlen(src);
	int total = cntdest + cntSrc;
	int i = 0;

	for (; cntdest < total; cntdest++)
	{
		dest[cntdest] = src[i];
		i++;
	}

	dest[total] = '\0';

	return (dest);
}
