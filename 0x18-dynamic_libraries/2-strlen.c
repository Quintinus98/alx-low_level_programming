#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: string pointer
 *
 * Return: 0 Always (Success)
 */
int _strlen(char *s)
{
	unsigned int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
