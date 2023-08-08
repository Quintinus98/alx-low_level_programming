#include "main.h"
/**
 * main - check the code
 * @ac: argument count
 * @av: argument list
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res, files[2];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	files[0] = open(av[1], O_RDONLY);
	if (!av[1] || files[0] == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	files[1] = creat(av[2], mode);
	if (files[1] == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
		close(files[0]);
		exit(98);
	}

	res = copy_from_to(files, av);
	printf("-> %i)\n", res);
	return (0);
}

/**
 * copy_from_to -  copies the content of a file to another file.
 * @files: files to copy.
 * @av: argument list.
 * Return: a copy of file_from to file_to.
*/
int copy_from_to(int files[], char **av)
{
	char *buffer;
	int size = 1024, f_close, i;
	ssize_t fw;

	buffer = malloc(size);

	if (read(files[0], buffer, size) != -1)
	{
		fw = write(files[1], buffer, size);
		if (fw == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
	}
	else
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		close(files[0]);
		exit(98);
	}

	for (i = 0; i < 2; i++)
	{
		f_close = close(files[i]);
		if (f_close == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", -1);
			free(buffer);
			exit(100);
		}
	}
	return (1);
}
