#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	char i;
	int retVal = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			retVal = 1;
		}
	}
	return retVal;
}
