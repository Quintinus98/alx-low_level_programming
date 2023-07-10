#include "main.h"
#include <stdlib.h>

#include "main.h"
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
 * _strdup - Duplicates string.
 * @str: a string argument.
 *
 * Return: a pointer to the array or null.
*/

char *_strdup(char *str)
{
	char *ar;
	unsigned int i, len;

	len = xlen(str);
	ar = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ar[i] = str[i];

	return (ar);
}
