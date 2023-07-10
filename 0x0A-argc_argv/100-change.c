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
	int cents[5] = {25, 10, 5, 2, 1};
	int i = 0, num = 0, result = 0;
	int change = 1;
	int arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	arg = atoi(argv[argc - 1]);

	if (arg <= 0)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	while (change != 0)
	{
		num = arg / cents[i];
		change = arg % cents[i];

		result += num;
		arg = change;
		i++;
	}

	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
