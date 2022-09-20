#include <stdio.h>
#include "main.h"
/**
 * len - Returns length of string
 * @s: String variable
 * Return: 0
 */
int len(char *s)
{
	unsigned int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}

	return (cnt);
}
/**
 * puts_half - Prints half of a string
 * @str: Accepts a string input
 */
void puts_half(char *str)
{
	unsigned int n, i, cnt;

	cnt = len(str);

	if (cnt % 2 == 0)
	{
		n = cnt / 2;
	}
	else
	{
		n = (cnt + 1) / 2;
	}

	for (i = n; i < cnt; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
