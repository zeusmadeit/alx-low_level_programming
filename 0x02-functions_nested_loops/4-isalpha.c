#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for ]alphabetical character.
 * @c: character to be checked
 *
 * Return: Return 1 succes, return 0 failure
*/
int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
