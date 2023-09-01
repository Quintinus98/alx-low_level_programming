#include "main.h"

/**
 * get_endianness - gets endianness.
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int i = 1;
	int j = ((char *)&i)[0];

	return (j);
}
