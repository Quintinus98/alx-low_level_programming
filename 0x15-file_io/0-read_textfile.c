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
	int opened;

	if (!filename)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);

	opened = open(filename, O_RDONLY);
	file_read = read(opened, str, letters);
	file_write = write(STDOUT_FILENO, str, file_read);

	if (opened < 0 || file_read < 0 || file_write < 0 || file_write != file_read)
	{
		free(str);
		return (0);
	}
	free(str);
	close(opened);
	return (file_write);
}
