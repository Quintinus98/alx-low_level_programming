#include "3-calc.h"
#include <string.h>
/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int diff = 0;

	while (*s1 != '\0')
	{
		diff = *s1 - *s2;
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (diff);
}

/**
 * get_op_func - pointer to function
 * @s: operator passed as argument to the program
 *
 * Return: Sum of 2 numbers
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (_strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
