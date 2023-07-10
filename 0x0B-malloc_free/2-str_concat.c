#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - Concatenates two strings.
 * @s1: first string argument.
 * @s2: second string argument
 *
 * Return: a pointer to the array or null.
*/
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j, len, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = xlen(s1) - 1;
	len2 = xlen(s2) - 1;
	len = len1 + len2 + 1;
	ar = malloc(len * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ar[i] = s1[i];
	for (j = 0; j < len2; j++)
		ar[len1 + j] = s2[j];

	ar[len - 1] = '\0';

	return (ar);
}
