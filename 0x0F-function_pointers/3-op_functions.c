#include "3-calc.h"

/**
 * op_add - Adds 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Sum of 2 numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: subtracts of 2 numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiply 2 numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Divides 2 numbers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of 2 numbers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
