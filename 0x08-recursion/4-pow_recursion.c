#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base int
 * @y: the exponent
 *
 * Return: returns -1 if y < 0 otherwise return x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
