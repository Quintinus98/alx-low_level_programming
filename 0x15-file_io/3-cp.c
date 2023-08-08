#include "main.h"
/**
 * main - check the code
 * @ac: argument count
 * @av: argument list
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copy_from_to(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

/**
 * copy_from_to -  copies the content of a file to another file.
 * @file_from: Copy files from this.
 * @file_to: Copy files to this.
 * Return: a copy of file_from to file_to.
*/
int copy_from_to(char *file_from, char *file_to)
{
	char *buffer;
	int fd, fd_close, fd_from, fd_from_close, size = 1024;
	ssize_t fr_from, fw;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (!file_from)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd = creat(file_to, mode);
	fd_from = open(file_from, O_RDONLY);

	buffer = malloc(size);
	fr_from = read(fd_from, buffer, size);
	if (fr_from == -1)
		return (-1);

	buffer[1024] = '\0';
	fw = write(fd, buffer, size);
	if (fd == -1 || fw == -1)
	{
		dprintf(fd, "Error: Can't write to %s", file_to);
		exit(99);
	}

	fd_close = close(fd);
	if (fd_close == -1)
	{
		dprintf(fd, "Error: Can't close fd %d", -1);
		exit(100);
	}
	fd_from_close = close(fd_from);
	if (fd_from_close == -1)
	{
		dprintf(fd, "Error: Can't close fd %d", -1);
		exit(100);
	}
	return (1);
}
