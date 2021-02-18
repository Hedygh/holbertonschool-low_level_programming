#include <stdio.h>
int main (void)
{
	int i = 1; 
	while (i <= 100)
	{
		if((i % 3) == 0 && (i % 5) == 0)
			printf("fizzbuzz");
		else if ((i % 5) == 0)
			printf("buzz");
		else if ((i % 3) == 0)
			printf("fizz");
		else
			printf("%d", i);
		i++;
	}
	return(0);
}
