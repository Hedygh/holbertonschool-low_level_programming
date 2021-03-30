#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - count length of string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * create_file - create a file and write string in it
 * @filename: file to create
 * @text_content: string to write
 * Return: 1 for success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	length = _strlen(text_content);
	write(fd, text_content, length);
	return (1);
}
