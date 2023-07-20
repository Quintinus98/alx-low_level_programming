#include "3-calc.h"

/**
 * main - Performs an operation
 * @argc: Count of argument
 * @argv: array of arguments
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int (*funct)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	funct = get_op_func(argv[2]);
	if (!funct)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", funct(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
