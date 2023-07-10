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

int main(int argc, char **argv)
{
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	result = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);
	printf("%d\n", result);
	}
	exit(EXIT_SUCCESS);
}
