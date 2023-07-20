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
	char arg2;
	int result;
	int (*funct)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg2 = *argv[2];
	funct = get_op_func(argv[2]);
	if (!funct)
	{
		printf("Error\n");
		exit(99);
	}

	if ((arg2 == '/' ||  arg2 == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = funct(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
