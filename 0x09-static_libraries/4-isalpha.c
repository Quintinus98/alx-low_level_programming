#include "main.h"
/**
 * _isalpha - Entry point
 * @c: Of type int
 * Return: Always 0.
 */
int _isalpha(int c)
{
	char i;
	int retVal = 0;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (i == c)
		{
			retVal = 1;
		}
	}
	return (retVal);
}
