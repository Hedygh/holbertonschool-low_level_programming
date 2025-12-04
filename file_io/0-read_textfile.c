#include "main.h"

/**
 * read_textfile - open read and print file content
 * @filename: file to read
 * @letters: number of letters to read
 * Return: number of printed chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	free(buffer);
	return (0);
	}
	rd = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, rd);
	close(fd);
	return (rd);
}
