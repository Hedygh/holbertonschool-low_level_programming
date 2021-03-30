#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read file and print its content to stdout
 * @filename: pointer to file
 * @letters: number of letters that could be print and read
 * Return: 0 if fail or numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd_fd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd)
	{
		free(buff);
		return (0);
	}
	rd_fd = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, rd_fd);
	close(fd);
	return (rd_fd);
}
