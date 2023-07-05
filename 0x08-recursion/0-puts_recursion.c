#include "main.h"

/**
 * _puts_recursion - Puts chars using recursion
 * @s: character
 * 
 * Return: 0
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
	{
		_putchar('\n');
	}
}
