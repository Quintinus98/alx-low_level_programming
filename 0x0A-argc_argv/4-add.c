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
	int i, result = 0;
	int converted_arg;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		converted_arg = strtol(argv[i], NULL, 10);
		if (!converted_arg)
		{
			printf("Error\n");
			return (1);
		}
		result += converted_arg;
	}

	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
