#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @c: Character
 *
 * Return: 0
 */

char *string_toupper(char *c)
{
	int sVal = 32;

	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - sVal;
		}
		c++;
	}

	return (c);

}
