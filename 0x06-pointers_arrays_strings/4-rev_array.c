/**
 * reverse_array - reverse an int array
 * @a: array
 * @n: number of elements
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j = 0;
	int tmp;

	while (j < i)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j++;
		i--;
	}
}
