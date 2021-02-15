/**
 * swap_int - swap value of 2 integers
 * @a: value to swap
 * @b: value to swap
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
