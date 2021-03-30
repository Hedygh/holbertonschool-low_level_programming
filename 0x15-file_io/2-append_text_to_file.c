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
		i++;
	return (i);
}
/**
 * append_text_to_file - append text to end of a file
 * @filename: file to append to
 * @text_content: text to append
 *
 * Return: 1 if file exist else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	length = _strlen(text_content);
	write(fd, text_content, length);
	return (1);
}
