#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _memset - fills n bytes of s with byte b
 * @s: pointer to memory area
 * @b: bytes to fill in
 * @n: size of the adress
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
/**
 * _calloc - reproduce the bahavior of calloc
 * @nmemb: numbers of line to array
 * @size: size of array
 * Description: use malloc to allocate memory large enough for an array
 * initializing to zero
 * Return: pointer value or null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);

	p = _memset(p, 0, nmemb * size);
	return (p);
}
/**
 * _strlen - return the lenght of string
 * @s: string to mesure
 *
 * Return: lenght value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * checkzero - check
 * @str: s1
 * Return: 0 if zero
 */
int checkzero(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	return (1);
}
/**
 * revandzero - sup zeros and reverse array to string
 * @tab: int array to convert to char
 * @i: index
 * @j: index
 * @length: length
 * @str: new string
 * @digit: digit
 * Return: str
 */
char *revandzero(int *tab, int i, int j, int length, char *str, int digit)
{
	while (i >= 0 && tab[i] == 0)
	{
		if (tab[i] != 0)
			break;
		i--;
	}
	if (i == -1)
		return (NULL);
	length = i + 1;
	str = malloc(sizeof(char) * length + 1);
	if (!str)
	{
		free(tab);
		return (0);
	}
	j = 0;
	while (j < length)
	{
		digit = tab[i - j];
		str[j] = digit + 48;
		j++;
	}
	free(tab);
	str[j] = '\0';
	return (str);
}
/**
 * mul - multiply two strings
 * @s1: string
 * @s2: string
 * Return: result
 */
char *mul(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int length = len1 + len2;
	int i, j, carry, sum;
	int index = 0;
	int index2 = 0;
	int digit, digit2;
	int *tab;
	char *str;

	tab = _calloc(sizeof(int), length);
	if (!tab)
		return (0);
	sum = 0;

	i = len1 - 1;
	while (i >= 0)
	{
		carry = 0;
		digit = s1[i] - 48;
		index2 = 0;
		j = len2 - 1;
		while (j >= 0)
		{
			digit2 = s2[j] - 48;
			sum = digit * digit2 + tab[index + index2] + carry;
			carry = sum / 10;
			tab[index + index2] = sum % 10;
			j--;
			index2++;
		}
		if (carry > 0)
			tab[index + index2] += carry;
		index++;
		i--;
	}
	i = index + index2 - 1;
	str = revandzero(tab, i, j, length, str, digit);
	return (str);
}
/**
 * _isnumber - check num
 * @str: string
 * Return: 0 if no num
 */
int _isnumber(char *str)
{
	if (*str == '\0')
		return (1);
	if (!isdigit(*str))
		return (0);
	else
		return (_isnumber(str + 1));
}
/**
 * main - call for mul
 * @ac: number of av
 * @av: arguments
 * Return: always zero or 98
 */
int main(int ac, char **av)
{
	int i = 1;

	if (ac == 3)
	{
		if (_strlen(av[1]) == 0 || _strlen(av[2]) == 0)
			return (0);
		while (i < ac)
		{
			if (!_isnumber(av[i]))
			{
				printf("Error\n");
				exit(98);
			}
			if (checkzero(av[i]) == 1)
			{
				printf("0\n");
				return (0);
			}
			i++;
		}
		printf("%s\n", mul(av[1], av[2]));
		free(mul(av[1], av[2]));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
