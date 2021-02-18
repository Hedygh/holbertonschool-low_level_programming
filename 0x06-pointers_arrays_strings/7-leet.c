/**
 * leet - encode string into 1337
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i])
	{
		j = 0;
		while (s1[j] != '\0' && s2[j] != '\0')
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
			j++;
		}
		i++;
	}
	return (str);
}
