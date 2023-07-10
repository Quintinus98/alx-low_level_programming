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
	int result = 0;
	int i, j, k;

	if (argc <= 1)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (argv[j][0] == '-')
				continue;
			if (!(argv[j][k] <= '9') || !(argv[j][k] >= '0'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);

	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
