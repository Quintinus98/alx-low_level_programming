#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: Number value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int retVal;

	retVal = (n % 10);
	if (retVal < 0)
	{
		retVal *= -1;
	}
	_putchar('0' + retVal);
	return (retVal);
}
