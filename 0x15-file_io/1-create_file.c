#include "main.h"

/**
 * create_file - creates file with txt@filename: filename
 * @filename: filename
 * @text_content: txt in file
 *
 * Return: 1 Success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x != y)
			return (-1);
	}
	close(fd);
	return (1);
}
