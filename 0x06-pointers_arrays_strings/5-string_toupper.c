/**
 * string_toupper - changes lowercase to uppcase
 * @str: string to change
 * Return: string changed
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
