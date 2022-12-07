#include "main.h"

/**
 * read_textfile - reads and writes txt to std out
 * @filename: filename
 * @letters: number of letters
 * Return: number of letters or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, count;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_check = read(file, buf, letters);
	if (read_check == -1)
		return (0);

	count = write(STDOUT_FILENO, buf, read_check);
	if (count == -1 || read_check != count)
		return (0);

	free(buf);

	close(file);
	return (count);
}
