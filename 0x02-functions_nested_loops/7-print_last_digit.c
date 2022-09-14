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

	if (n < 0)
	{
		n = n * (-1);
	}
	retVal = (n % 10);
	_putchar(retVal);
	return (retVal);
}
