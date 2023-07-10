#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - main program
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: Exit success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	exit(EXIT_SUCCESS);
}
