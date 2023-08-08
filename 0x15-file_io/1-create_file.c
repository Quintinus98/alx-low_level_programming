#include "main.h"

/**
 * create_file - Creates a textfile.
 * @filename: name of the file.
 * @text_content: the content to be passed into the file.
 * Return: the actual number of letters it could read and print
*/

int create_file(const char *filename, char *text_content)
{
	int fd, cnt = 0;
	ssize_t fw;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = creat(filename, mode);
	if (fd == -1)
		return (0);
	while (text_content && text_content[cnt])
		cnt++;

	fw = write(fd, text_content, cnt);
	close(fd);

	return (fw);
}
