#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - check the code
 * @name: Name to print
 * @f: function to call
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
