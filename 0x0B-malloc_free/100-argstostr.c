#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * xlen - Length of string
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
 * argstostr - concatenates all the arguments of your program.
 * @ac: Count of arguments
 * @av: argument variables
 *
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	int count = 0, b = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		count += (xlen(av[i]) - 1);

	ar = malloc((count + ac) * sizeof(char));

	for (j = 0; j < ac; j++)
	{
		len = xlen(av[j]);
		for (k = 0; k < len; k++)
		{
			if (k == len - 1)
			{
				ar[b] = '\n';
				b++;
				continue;
			}
			ar[b] = av[j][k];
			b++;
		}
	}

	return (ar);
}
