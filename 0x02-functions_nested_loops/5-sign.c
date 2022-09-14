#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 * @n: Number value
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int retVal;

	if (n > 0)
	{
		retVal = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		retVal = 0;
		_putchar('0');
	}
	else
	{
		retVal = -1;
		_putchar('-');
	}
	return (retVal);
}
