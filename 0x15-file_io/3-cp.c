#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * cpy_ffrom_fto - open and close file from and file to
 * @from: file from name
 * @to: file to name
 */
void cpy_ffrom_fto(char *from, char *to)
{
	int fd_from, fd_to, clf, clt, rf, wf;
	char buff[1024];

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", from);
		exit(98);
	}
	rf = read(fd_from, buff, 1024);
	if (rf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	fd_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(98);
	}
	wf = write(fd_to, buff, rf);
	if (wf == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	clf = close(fd_from);
	if (clf == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	clt = close(fd_to);
	if (clt == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
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
	if (!av[1])
	{
		dprintf(2, "Error: Can't read from file %s \n", av[1]);
		exit(98);
	}
	cpy_ffrom_fto(av[1], av[2]);
	return (0);
}
