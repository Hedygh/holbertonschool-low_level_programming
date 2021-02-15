/**
 * _strcpy - copy the string src to the buffer dest
 * @dest: buffer
 * @src: string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
