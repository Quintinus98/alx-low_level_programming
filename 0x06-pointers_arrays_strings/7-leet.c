#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes string to 1337
 * @c: character c
 *
 * Return: Always 0.
 */
char *leet(char *c)
{
	char sm[] = {'a', 'e', 'o', 't', 'l'};
	char cp[] = {'A', 'E', 'O', 'T', 'L'};
	char vl[] = {'4', '3', '0', '7', '1'};
	int i;
	char *cAddress = c;

	while (*c != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == sm[i] || *c == cp[i])
			{
				*c = vl[i];
			}
		}
		c++;
	}
	c = cAddress;

	return (c);
}
