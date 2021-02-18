/**
 * _strncpy - copy n bytes of src to dest
 * @dest: copy of string
 * @src: string to copy
 * @n: bytes limit
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
