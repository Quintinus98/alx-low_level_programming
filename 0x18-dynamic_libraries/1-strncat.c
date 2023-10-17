#include "main.h"
/**
 * zlen - String length
 * @s: String variable
 *
 * Return: 0
 */
int zlen(char *s)
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
 * _strncat - String Concatenation fn
 * @dest: destinination
 * @src: Source
 * @n: number of bytes from src
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int cntdest = zlen(dest);
	int cntSrc = zlen(src);
	int total;
	int i = 0;

	if (n >= cntSrc)
	{
		total = cntdest + cntSrc;
	}
	else
	{
		total = cntdest + n;
	}
	for (; cntdest < total; cntdest++)
	{
		dest[cntdest] = src[i];
		i++;
	}

	if (n >= cntSrc)
	{
		dest[total] = '\0';
	}

	return (dest);
}
