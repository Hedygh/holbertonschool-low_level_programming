#include <stdio.h>
int palindrome(int n)
{
	int i = n;
	int j = 0;
	int nb;

	while (n > 0)
	{
		nb = n % 10;
		j = j * 10 + nb;
		n /= 10;
	}
	if (i == j)
		return (1);
	return (0);
}
int main(void)
{
	int i = 100;
	int j = 100;
	int mul;
	int pal = 0;

	while (i <= 999)
	{
		j = 100;
		while (j <= 999)
		{
			mul = i * j;
			if (mul > pal && palindrome(mul) == 1)
				pal = mul;
			j++;
		}
		i++;
	}
	printf("%d\n", pal);
	return (0);
}
