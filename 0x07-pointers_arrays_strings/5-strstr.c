/**
 * _strstr - find needle in the haystack string
 * @haystack: string to search into
 * @needle: substring to look for
 *
 * Return: pointer to first char of substring or 0 if no sub found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		if (needle[0] == haystack[i])
		{
			while (haystack[i + j] == needle[j] && needle[j])
			{
				if (needle[j + 1] == '\0')
					return (&haytack[i]);
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
