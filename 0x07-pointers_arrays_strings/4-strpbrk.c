#include "main.h"
/**
 * _strpbrk - locates the first occurence of string
 * @s: string
 * @accept: Accept
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
