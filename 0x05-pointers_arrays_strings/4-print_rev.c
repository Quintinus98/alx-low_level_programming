#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints string in reverse order
 * @s: string input
 */
void print_rev(char *s)
{
	int i, cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}

	s = s - 1;
	for (i = cnt - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
