#include "main.h"
/**
 * main - check the code
 * @ac: argument count
 * @av: argument list
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int files[2], cnt, f_close, f_close1; /* copy from files[0] to files[1].*/
	char buffer[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	files[0] = open(av[1], O_RDONLY);
	if (files[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	files[1] = creat(av[2], 0664);
	while ((cnt = read(files[0], buffer, BUFSIZ)) > 0)
	{
		if (write(files[1], buffer, cnt) != cnt || files[1] == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(files[0]);
			exit(99);
		}
	}
	if (cnt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_close = close(files[0]);
	f_close1 = close(files[1]);
	if (f_close == -1 || f_close1 == -1)
	{
		if (f_close == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", files[0]);
		if (f_close1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", files[1]);
		exit(100);
	}
	return (0);
}
