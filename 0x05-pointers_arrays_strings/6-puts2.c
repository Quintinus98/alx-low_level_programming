#include <stdio.h>
#include "main.h"
/**
 * puts2 - Puts string
 * @str: str is a char
 */

void puts2(char *str)
{
	char p[] = "1359";
	while (*str != '\0')
	{
		if (*str == p[0] || *str == '3' || *str == '5' || *str == '7' || *str == '9')
		{
		}
		else
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
