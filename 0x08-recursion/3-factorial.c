#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: Factorial of @n
 */
int	factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);
	return (fact);
}
