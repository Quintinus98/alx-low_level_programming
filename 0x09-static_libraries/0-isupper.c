#include "main.h"
/**
 * _isupper - Prints character
 * @c: variable c
 *
 * Return: Always 0
*/
int _isupper(int c)
{
	char i;
	int retVal = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			retVal = 1;
		}
	}
	return (retVal);
}
