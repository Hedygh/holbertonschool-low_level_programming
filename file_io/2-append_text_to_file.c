#include "main.h"

/**
 * append_text_to_file - append text at the end of file
 * @filename: filename
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	i = 0;
	while (text_content[i])
		i++;
	write(fd, text_content, i);
	return (1);
}
