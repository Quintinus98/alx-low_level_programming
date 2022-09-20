#include <stdio.h>
#include "main.h"
/**
 * _puts - Puts string
 * @str: str is a char
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
