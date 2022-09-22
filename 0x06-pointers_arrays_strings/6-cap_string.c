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
	char *sAddress = s;

	while (*s != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (*s == sep[i])
			{
				s++;
				*s = char_toupper(*s);
				s--;
			}
		}
		s++;
	}
	s = sAddress;

	return (s);
}
