#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

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
 * _isdigit - check for digit
 * @c: digit sent to check
 * Return: 1 for digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
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
		return (0);
	j = 0;
	while (j < length)
	{
		digit = tab[i - j];
		str[j] = digit + 48;
		j++;
	}
	free(tab);
	str[length] = '\0';
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

	tab = malloc(sizeof(int) * length);
	if (!tab)
		return (0);
	char *str;

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
	return (revandzero(tab, i, j, length, str, digit));
}
/**
 * main - call for mul
 * @ac: number of av
 * @av: arguments
 * Return: always zero or 98
 */
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		if (_strlen(av[1]) == 0 || _strlen(av[2]) == 0)
			return (0);
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (_isdigit(av[1][i]) == 0 || _isdigit(av[2][j]) == 0)
				{
					printf("Error\n");
					exit(98);
				}
				j++;
			}
			i++;
		}
		printf("%s\n", mul(av[1], av[2]));
	}
	else
	{
		printf("Error\n");
		return (98);
	}
	return (0);
}
