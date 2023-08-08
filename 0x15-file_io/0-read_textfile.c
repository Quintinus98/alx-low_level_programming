#include "main.h"

/**
 * read_textfile - Reads a textfile.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fileName;
	char ch;
	size_t cnt = 0;

	fileName = fopen(filename, "r");
	if (!fileName || !filename)
		return (0);

	do
	{
		ch = fgetc(fileName);
		_putchar(ch);
		cnt++;
	} while (cnt < letters && ch != EOF);

	fclose(fileName);
	return (cnt);
}
