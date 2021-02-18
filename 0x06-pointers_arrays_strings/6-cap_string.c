/**
 * cap_string - Capitalize words by separators
 * @str: string to work on
 *
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((!(str[i - 1] >= 'a' && str[i - 1] <= 'z')) &&
					(!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')) &&
					(!(str[i - 1] >= '0' && str[i - 1] <= '9')) &&
					(!(str[i - 1] == '-')))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
