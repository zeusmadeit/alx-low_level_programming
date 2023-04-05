#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: number to be checked
 * Return; 1 if prime, else 0
 */
int	is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime: check if is prime number
 * @n: number
 * @i: number to divide @n by
 * Retur: 1 if prime, else 0
 */
int	is_prime(int n, int i)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if ((i > n) || (i < n) && (n % i == 0))
		return (0);
	if ((i == n) && (n % i == 0))
		return (1);
	return (is_prime(n, i + 1));

}
