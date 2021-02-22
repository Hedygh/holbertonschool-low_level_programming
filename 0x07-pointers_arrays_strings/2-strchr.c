/**
 * _strchr - locate and return pointer to c in a string
 * @s: string to search into
 * @c: char to look for
 * Description: Pointer to the first occurence value of pointer = c till \0
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
		return (s);
	else
		return (0);
}
