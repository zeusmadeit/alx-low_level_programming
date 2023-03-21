#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: Return 1 succes, return 0 failure
*/
int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
