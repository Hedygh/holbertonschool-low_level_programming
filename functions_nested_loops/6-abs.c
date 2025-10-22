#include "main.h"

/**
 * _abs - absolute value of an int
 * @x: int value
 * Return: int
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
