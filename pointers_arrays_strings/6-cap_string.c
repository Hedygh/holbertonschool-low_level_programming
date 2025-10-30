#include "main.h"

/**
 * cap_string - capitalize words
 * @str: string
 *
 * Return: modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 32 && str[i] <= 47) ||
				(str[i] >= 123 && str[i] < 127))
			i++;
		if ((str[i] >= 'a' && str[i] <= 'z') 
				&& (!(str[i - 1] >= 'A') && (str[i - 1] <= 'Z')) &&
				(!(str[i - 1] >= '0' && str[i -1] <= '9')))
			str[i] -= 32;
		i++;
	}	
	return (str);
}
