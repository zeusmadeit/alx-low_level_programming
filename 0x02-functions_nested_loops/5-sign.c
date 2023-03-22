#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for sign.
 * @n: integer to be checked
 *
 * Return: Return -1 if neg. or 1 if positive else 0 if n == 0
*/
int	print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
                return (0);
	}
	else
	{
		_putchar('+');
                return (1);
	}
}
