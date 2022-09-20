#include <stdio.h>
#include "main.h"
/**
 * puts2 - Puts string
 * @str: str is a char
 */

void puts2(char *str)
{
	int cnt = 0;

	while (*str != '\0')
	{
		if (cnt % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		cnt++;
	}
	_putchar('\n');
}
