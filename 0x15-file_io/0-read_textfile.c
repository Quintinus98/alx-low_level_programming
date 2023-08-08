#include "main.h"

/**
 * read_textfile - Reads a textfile.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_read, file_write;
	char *str;
	int file_open;

	str = malloc(sizeof(char) * letters);
	if (!str || !filename)
		return (0);

	file_open = open(filename, O_RDONLY);
	file_read = read(file_open, str, letters);
	file_write = write(STDOUT_FILENO, str, file_read);

	if (file_open < 0 || file_read < 0 || file_write < 0)
	{
		free(str);
		return (0);
	}
	return (file_write);
}
