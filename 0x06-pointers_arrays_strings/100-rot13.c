#include <stdio.h>
#include "main.h"

/**
 * rot13 - Encodes string using rot13
 * @c: character c
 *
 * Description: visit https://en.wikipedia.org/wiki/ROT13 for more details.
 * Return: Always 0.
 */
char *rot13(char *c)
{
	char sm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int n = sizeof(sm) / sizeof(char);
	char *cAddress = c;

	while (*c != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (*c == sm[i])
			{
				*c = cp[i];
				break;
			}
		}
		c++;
	}
	c = cAddress;

	return (c);
}
