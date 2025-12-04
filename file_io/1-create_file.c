#include "main.h"

/**
 * create_file - create a file and write into it
 * @filename: file to create
 * @text_content: string to write into the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i])
		i++;
	write(fd, text_content, i);
	return (1);
}
