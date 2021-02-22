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
	int j = 0;

	while (accept[i])
	{
		while (s[j])
		{
			if (accept[i] == s[j])
			{
				n = n + 1;
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (n + 1);
}
