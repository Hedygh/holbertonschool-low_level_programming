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
