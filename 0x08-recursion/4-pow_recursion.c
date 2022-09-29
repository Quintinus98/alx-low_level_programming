#include "main.h"
/*
 * _pow_recursion - Returns x raised to power y
 * @x: value 1
 * @y: value 2
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y >= 1)
		return (x * _pow_recursion(x, y - 1));
	return (-1);
}
