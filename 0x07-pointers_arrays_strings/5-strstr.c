#include <stdio.h>
#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: String
 * @needle: substring
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, j = 0;

	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			i = 0;
			for (k = j; needle[i] != '\0'; )
			{
				if (haystack[k] != needle[i])
				{
					break;
				}
				else
				{
					k++;
					i++;
				}
			}
			if (needle[i] == '\0')
			{
				return (haystack + j);
			}
		}
		j++;
	}
	return (0);
}
