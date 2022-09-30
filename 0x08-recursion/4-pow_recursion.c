#include "main.h"

/**
 * _power_recursion - value of x to the power of y
 * @x: value
 * @y: power
 * Return : Always 0
 */
int _power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
