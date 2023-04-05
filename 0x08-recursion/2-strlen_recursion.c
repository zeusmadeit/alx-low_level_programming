#include "main.h"

/**
 * _strlen_recursion  - find length of string with recursion
 * @s: string
 * Return: length
 */
int	_strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i +=  _strlen_recursion(s + 1);
	}
	return (i);
}
