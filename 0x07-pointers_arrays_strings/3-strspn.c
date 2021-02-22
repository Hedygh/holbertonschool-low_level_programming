/**
 * _strspn - return lenght of bytes contained in *s from *accept
 * @s: initial string
 * @accept: substring bytes to check
 * Return: number of bytes from accept in s string (+1 for '\0')
 */
unsigned int  _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;
	int j;

	while (accept[i])
	{
		j = 0;
		while (s[j] && s[j] != accept[i])
			j++;
		if (s[j] == accept[i])
			n = n + 1;
		i++;
	}
	return (n + 1);
}
