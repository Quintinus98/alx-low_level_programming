#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: string
 * @accept: Accept
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	char *acceptAdd = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				cnt++;
				break;
			}
			if (*(accept + 1) == '\0' && *s != *accept)
			{
				return (cnt);
			}
			accept++;
		}
		s++;
		accept = acceptAdd;
	}

	return (cnt);
}
