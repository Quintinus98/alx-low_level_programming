#include <stdio.h>
#include "main.h"
/**
 * len - String length
 * @s: String variable
 *
 * Return: 0
 */
int len(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}

	return (cnt++);

}
/**
 * _strcat - String Concatenation fn
 * @dest: destinination
 * @src: Source
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int cntdest = len(dest);
	int cntSrc = len(src);
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
