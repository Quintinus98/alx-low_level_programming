#include <stdio.h>
#include "main.h"
/**
 * char_toupper - Changes all lowercase letters to uppercase
 * @c: Character
 *
 * Return: 0
 */

char char_toupper(char c)
{
	char sVal = 32;

	if (c >= 97 && c <= 122)
	{
		c = c - sVal;
	}

	return (c);
}

/**
 * cap_string - Capitalize string
 * @s: string
 *
 * Return: 0
 */
char *cap_string(char *s)
{
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i;
	int n = sizeof(sep) / sizeof(char);
	char c;

	while (*s != '\0')
	{
		i = 0;
		while (i < n)
		{
			if (*s == sep[i])
			{
				s++;
				c = *s;
				*s = char_toupper(c);
				s--;
			}
			i++;
		}
		s++;
	}

	return (s);
}
