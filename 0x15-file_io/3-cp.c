#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_and_write_ff_fto - read file from and write to file to
 * @from: file from name
 * @to: file to name
 * @ff: open value of file from
 * @ft: open value of file to
 * @buff: buffer
 */
void read_and_write_ff_fto(char *from, char *to, int ff, int ft, char *buff)
{
	int rf;
	int rt;
	int wf;

	rf = read(ff, buff, 1024);
	if (rf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	wf = write(ft, buff, rf);
	if (wf == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}

}
/**
 * cpy_ffrom_fto - open and close file from and file to
 * @from: file from name
 * @to: file to name
 */
void cpy_ffrom_fto(char *from, char *to)
{
	int fd_from;
	int fd_to;
	char buff[1024];
	int clf;
	int clt;

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", from);
		exit(98);
	}
	fd_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(98);
	}
	read_and_write_ff_fto(from, to, fd_from, fd_to, buff);
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
