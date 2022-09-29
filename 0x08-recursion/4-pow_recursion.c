#include "main.h"

/**
 * _power_recursion - returns the value of x raised to the power of y
 * @x: number to be used
 * @y: exponent to be used
 *
 * Return: x ^ y
 */
int _power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


