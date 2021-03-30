#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * closefile - close opened file
 * @fd: file descriptor
 */
void closefile(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * cpy_ffrom_fto - open and close file from and file to
 * @from: file from name
 * @to: file to name
 */
void cpy_ffrom_fto(const char *from, char *to)
{
	int fd_from, fd_to, rf, wt, cl;
	char buff[1024];

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", from),
			exit(98);
	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", to),
			exit(98);
	rf = read(fd_from, buff, 1024);
	if (rf == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from),
			exit(98);
	while (rf > 0)
	{
		wt = write(fd_to, buff, rf);
		if (wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
		rf = read(fd_from, buff, 1024);
		if (rf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			exit(98);
		}
	}
	cl = close(fd_from);
	if (cl == -1)
		closefile(fd_from);
	cl = close(fd_to);
	if (cl == -1)
		closefile(fd_to);
}
/**
 * main - call for function to copy file content to another
 * @ac: number of arg
 * @av: content of arg
 * Return: always 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (av[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cpy_ffrom_fto(av[1], av[2]);
	return (0);
}
