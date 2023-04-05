#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x; int 
 * @y: power
 * Return: integer
 */
int	_pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	result *= _pow_recursion(result, y - 1);
	return (result);
}
