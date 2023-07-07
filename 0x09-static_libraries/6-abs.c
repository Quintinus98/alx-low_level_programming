#include "main.h"
/**
 * _abs - Entry point
 * @n: Number value
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int retVal;

	if (n < 0)
	{
		retVal = n * (-1);
	}
	else
	{
		retVal = n;
	}
	return (retVal);
}
