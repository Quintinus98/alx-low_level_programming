#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Integer variable
 *
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int i;
	int state = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if(c == i)
		{
			state = 1;
		}
	}

	return (state);
}
