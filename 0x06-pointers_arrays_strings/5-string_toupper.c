#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @c: Character
 *
 * Return: Always 0.
 */
char *string_toupper(char *c)
{
	char sVal = 32;
	char *cAddress = c;

	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
			*c = *c - sVal;
		c++;
	}

	c = cAddress;
	return (c);
}
