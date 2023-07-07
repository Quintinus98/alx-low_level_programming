#include <stdio.h>
#include "main.h"
/**
 * _puts - Puts string
 * @s: str is a char
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
