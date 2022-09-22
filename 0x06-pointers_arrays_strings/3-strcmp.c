#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int diff = 0;

	while (*s1 != '\0')
	{
		diff = *s1 - *s2;
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}

	return (diff);
}
