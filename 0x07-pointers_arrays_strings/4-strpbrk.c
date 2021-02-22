/**
 * _strpbrk - find first occurence of s in accept
 * @s: string for the occurence
 * @accept: string to look into
 * Return: pointer to matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[j])
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == s[j])
				return (&s[j]);
			i++;
		}
		j++;
	}
	return (0);
}
