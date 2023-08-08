#include "main.h"

/**
 * append_text_to_file - Append a text to an existing file.
 * @filename: name of the file.
 * @text_content: the content to be passed into the file.
 * Return: the actual number of letters it could read and print
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cnt = 0;
	ssize_t fw;

	if (!filename)
		return (-1);
	while (text_content && text_content[cnt])
		cnt++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	fw = write(fd, text_content, cnt);
	if (fw == -1)
		return (-1);
	close(fd);

	return (1);
}
