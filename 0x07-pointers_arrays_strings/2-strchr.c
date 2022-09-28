#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *sAdd;

	while (*s != '\0')
	{
		if (*s == c)
		{
			sAdd = s;
			break;
		}
		s++;
	}
	s = sAdd;

	return (s);
}
