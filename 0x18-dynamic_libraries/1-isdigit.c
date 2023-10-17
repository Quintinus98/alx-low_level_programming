#include "main.h"

/**
 * _isdigit - Checks for uppercase character
 * @c: Integer variable
 *
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	int i;
	int state = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			state = 1;
		}
	}

	return (state);
}
