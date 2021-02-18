/**
 * _strcat - append src to dest
 * @dest: base string
 * @src: string to append
 * Return: pointer to new dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
