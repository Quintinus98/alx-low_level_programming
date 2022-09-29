#include "main.h"
/**
 * _puts_recursion - Prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
